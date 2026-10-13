class Solution {
    public void moveZeroes(int[] nums) {
       
//暴力写法还是有问题  无法解决数组挪动的问题 最优解是快慢指针
        int slow = 0;

        for (int fast = 0; fast < nums.length; fast++)
        {
            if (nums[fast] != 0)
            {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        for (int i = slow; i < nums.length; i++)
        {
            nums[i] = 0;
        }

        return;




    }
}
