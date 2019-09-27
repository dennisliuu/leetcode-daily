```
Environment: gcc version 7.4.0
Date: 2019/9/27
Time complexity: O(n)
```
### 想法：

由於題目沒有限制用哪種算法，就乾脆不要了（x

以下為 Python 使用 base64 的做法

```python
class Codec:

    def encode(self, longUrl):
        """Encodes a URL to a shortened URL.
        
        :type longUrl: str
        :rtype: str
        """
        return "http://tinyurl.com/" + longUrl.encode('base64')


    def decode(self, shortUrl):
        """Decodes a shortened URL to its original URL.
        
        :type shortUrl: str
        :rtype: str
        """
        return shortUrl[19:].decode('base64')


# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))
```

### 技術筆記
