import fetch from "node-fetch";

const fetchPosts = async (userId: number) => {
  try {
    const response = await fetch(
      `https://jsonplaceholder.typicode.com/users/${userId}/posts`
    );
    return await response.json();
  } catch (e) {
    handleError(e, "Error while fetching Posts!");
  }
};

const handleError = (e, message) => {
  console.log(e);
  throw Error(message);
};

const cleanupPosts = (posts) => {
  return posts.map((post) => {
    delete post["userId"];
    return post;
  });
};

const main = async () => {
  const posts = await fetchPosts(1);
  console.log(cleanupPosts(posts));
};