var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


while (lines.length > 1) {
   let cases = lines.shift().split(' ')

   let arr = cases[1].split('')
   let test = cases[0]

   if(arr !== '0' && test !== '0') {        
       let result = arr.filter(num => num != test)
       let compare = result[0]

       while(compare === '0'){
        result.shift()
        compare = result[0]
       }

       if(result.length === 0){
        console.log('0');
       }else{
           console.log(result.join(''));
       }
   }
}    