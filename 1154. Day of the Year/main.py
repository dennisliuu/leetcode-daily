import time
class Solution:
    def dayOfYear(self, date: str) -> int:
        y = date.split("-")[0]
        m = date.split("-")[1]
        d = date.split("-")[2]
        return time.strptime(date, "%Y-%m-%d")[7]