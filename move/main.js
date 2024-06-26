const rl = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});
const letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

function move(s) {
    for(let i = 0; i < s.length; i++) {
        let c = s.charAt(i);
        if(letters.includes(c)) {
            s = s.slice(0, i) + letters.charAt(letters.indexOf(c) + 1) + s.slice(i + 1);
        }
    }
    return s;
}

rl.question("Enter the string: ", function(s) {
    console.log("Moved string: " + move(s));
    rl.close();
});

rl.on("close", function() {
    process.exit(0);
});
