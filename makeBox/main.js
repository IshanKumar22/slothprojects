const rl = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});

function makeBox(n) {
    let s = "";
    for(let j = 0; j < n; j++) {
        for(let i = 0; i <= n; i++) {
            if(i == n) {
                s += "\n";
                continue;
            }
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                s += '#';
                continue;
            }
            s += " ";
        }
    }
    return s;
}

rl.question("Enter the dimension: ", function(nStr) {
    console.log(makeBox(Number(nStr)));
    rl.close();
});

rl.on("close", function() {
    process.exit(0);
});
