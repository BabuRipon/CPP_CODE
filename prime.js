
let a=2;
let b=15;

let fun=(a,b)=>{
    while(a<=b){
        let count=0;
       for(let i=2;i<a-1;i++){
          if(a%i==0){
              count++;
              break;
          } 
       }
       if(count==0){
           console.log(a)
       }
       a++;
    }
}

fun(a,b);