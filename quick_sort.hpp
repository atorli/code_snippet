#include <array>

template<typename T,std::size_t size>
std::size_t partion(std::array<T,size>& arr,int start,int end)
{
   T base = arr[end];
   std::size_t i = start -1;
   for(std::size_t j = start ; j < end ;++j)
   {
      if(arr[j] <= base)
      {
         i += 1;
         T temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }

   arr[end] = arr[i+1];
   arr[i+1] = base;

   return i+1;
}

template<typename T,std::size_t size>
void quick_sort(std::array<T,size>& arr,int start,int end)
{
   if(start < end)
   {
      std::size_t middle = partion(arr,start,end);
      quick_sort(arr,start,middle-1);
      quick_sort(arr,middle+1,end);
   }
}