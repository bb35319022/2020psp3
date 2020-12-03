# 課題3 レポート
35319022 小池真白


## 課題  

以下の2つのアルゴリズムで文字列を検索するプログラムを作成する。  
- 力ずく法
- BM法

1. 使用するデータ  
以下のデータを使用する。ただし、検索対象文字列、検索する文字列は変更しても良い。  
    - StrOriginal: 検索対象データ
    - StrKey: 検索する文字列

2. 必須問題：実装する関数  
本課題では、以下の関数を実装する。C言語の標準ライブラリは使用しないこと。  
    (1) ForceSearch: 力ずく法で文字列を検索する。  
    [入力]  
    - char text[]: 検索対象文字列  
    - char key[]: 検索する文字列  

    [出力]  
    - return値：検索する文字列が出現した場所(ポインタ)。ただし、検索する文字列が見つからない場合はNULL。  

    (2) BMSearch: BM法で文字列を検索する。  
    [入力]  
    - char text[]: 検索対象文字列  
    - char key[]: 検索する文字列  
 
    [出力]  
    - return値：検索する文字列が出現した場所(ポインタ)。ただし、検索する文字列が見つからない場合はNULL。  

3. 補助関数  
なし

## ソースコードの説明

L14~18:int型でそれぞれ必要な値を定義する
L19:findを0で定義する
L21:for文でtextを1文字ずつ追っていく
L22:for文でkeyを1文字ずつ追っていく
L23:if文で文字列を照合する
L24:if文でposとkey_len-1を照合
L25:find=1としbreak
L34:if文でfind==1の時break
L39:if文でposとkey_len-1を照合
L40:text+startを返す
L50~56:int型でそれぞれ必要な値を定義する
L57:find=0を定義
L59~62:for文でindexがALPHABET_LEN 255 より小さい間、table[index] = key_lenを繰り返す
L64~67:for文でkey_indexがkey_lenより小さい間、table[(int)key[key_index]] = key_len -1 - key_indexを繰り返す
L69:indexにkey_len-1を代入
L70~97:indexがtext_lenより小さい間以下の処理をくり返す
L72:index_bfにindexを代入
L73:for文でkey_index = key_len - 1から key_index が0より大きい間以下の処理を続ける
L75~77:if文でtext[index] == key[key_index]を照合し一致したときindexにindex - 1を代入
L78:if文でkey_indexが0の時、find=1とし、break
L83:else文で index に index + table[(int)text[index]]を代入
L84:if文でindexがindex_bf以下の時indexにindex_bf + 1を代入
L93:if文でfindが1の時break
L98:if文でkey_indexが0と一致したときtext + indexを返す
L101:else文でNULLを返す



## 出力結果

```
Force Search. Find keyword at:wind in my hair.
BM Search. Find keyword at: wind in my hair.
```
## 修正履歴
L100:return値をtext + index + 1;に修正

