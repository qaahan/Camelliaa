//class Solution {
//public:
//    int lengthOfLongestSubstring(string s)
//    {
//        int maxlen = 0;
//
//        for (int i = 0; i < s.size(); i++)
//        {
//            int count = 0;
//            //所有字符的ascii码是0-127
//            bool exist[127] = { false };
//            for (int j = i; j < s.size(); j++)
//            {
//                char ch = s[j];
//                //如果这个数存在就跳出
//                if (exist[ch])
//                {
//                    break;
//                }
//                exist[ch] = true;
//                count++;
//            }
//            if (count > maxlen)
//            {
//                maxlen = count;
//            }
//
//        }
//        return maxlen;
//    }
//};