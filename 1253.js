var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift();

for (let i = 0; i < qtd; i++) {
   let encoded = lines.shift();
   let key = lines.shift();
   let decoded = ''

   for (let value in encoded) {
      decoded += String.fromCharCode(((encoded[value].charCodeAt() - 90 - key) % 26 + 90))
     
   }
   
   console.log(decoded);

}

