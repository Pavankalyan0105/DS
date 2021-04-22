

function partition(arr , start , end){
    var pivot  = arr[end];
    var pIndex = end;
    
    for(var i=0;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            [arr[i] , arr[pIndex]] = [arr[pIndex] , arr[i]]
            pIndex++;
        }
    }
    [arr[end] , arr[pIndex]] =   [arr[pIndex] , arr[end]]
    return pIndex;
}


function quickSort(arr , start , end)
{
    if(start>=end)
        return;
    
    var pIndex = partition(arr , start , end);
    quickSort(arr , start , pIndex-1);
    quickSort(arr , pIndex+1 , end);
}

arr =[6,5,4,,34,2,2232,3,2,1]

quickSort(arr , 0 , arr.length-1)
for(var i=0;i<6;i++)
        console.log(arr[i]+"  ")

// function swap(x, y) {
//     return [y, x];
// }

// var a=45
// var b= 67
// [a , b]= swap(a , b)

// console.log("a = "+a+"  b ="+b)