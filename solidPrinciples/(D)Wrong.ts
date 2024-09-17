class RedisLog {
  sendLog(logMessage: string) {
    console.log(`Log Sent to Redis for logMessage`);
  }
}

const errorDecorator = (error: Error) => {
  const log = new RedisLog();
  log.sendLog(JSON.stringify(error));
};

const main = () => {
  errorDecorator(new Error("Error Message"));
};

main();