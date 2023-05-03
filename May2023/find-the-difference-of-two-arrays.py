class Solution(object):
    def findDifference(self, nums1, nums2):
        res = []
        l1 = []
        l2 = []
        for x in nums1:
            if (x not in nums2 and x not in l1):
                l1.append(x)
        for x in nums2:
            if (x not in nums1 and x not in l2):
                l2.append(x)
        res.append(l1)
        res.append(l2)
        return res
