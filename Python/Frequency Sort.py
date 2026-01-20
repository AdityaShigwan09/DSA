# Given a string, return characters sorted by frequency (highest first).
# Example: "bbbaaac" → "bbbaaac" or "aaabbbc" (any valid freq order)

def frequency_sort(s):

    freq = {}
    for ch in s:
        freq[ch] = freq.get(ch, 0) + 1

    print(freq)
    sorted_items = sorted(freq.items(), key=lambda x: x[1], reverse=True)
    
    result = ""
    for char, count in sorted_items:
        result += char * count

    return result


print(frequency_sort("bbbaaac"))
