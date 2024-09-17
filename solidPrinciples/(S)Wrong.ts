import fetch from "node-fetch";

const getPosts = async (userId: number) => {
  try {
    const response = await fetch(
      `https://jsonplaceholder.typicode.com/users/${userId}/posts`
    );
    const posts = await response.json();
    const cleanedPosts = posts.map((post) => {
      delete post["userId"];
      return post;
    });
    return cleanedPosts;
  } catch (e) {
    console.log(e);
    throw Error("Error while fetching Posts!");
  }
};

const main = async () => {
  const result = await getPosts(1);
  console.log(result);
};

main();