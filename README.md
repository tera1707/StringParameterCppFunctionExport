# StringParameterCppFunctionExport

## 仕様（Copilotに作ってもらうときのinput）

このコードは、以下のような構成にしたいです。
「やりたいこと」の項目に書いた内容を実装して下さい。

# プロジェクト構成

## StringParameterCppFunctionExportプロジェクト

Dll1.dllがエクスポートした関数を呼び出すC#プロジェクト

## Dll1プロジェクト

StringParameterCppFunctionExport.exeから呼ばれる関数を定義するC++プロジェクト

# やりたいこと

Dll1プロジェクトに、以下の仕様の関数を1つ実装してください。

- 戻り値はBOOL型。
- 引数として文字列をとる。その文字列が、10文字以上ならTRUE、10文字未満ならFALSEを返す。
- 文字列の引数をどのように受けるかの実装は、あなた(Copilot)にお任せします。

StringParameterCppFunctionExportプロジェクトで、以下を実装してください。

- Dll1プロジェクトで作成したDll1.dllがexportする、上記の関数を呼ぶ。
- 引数に、10文字以上の文字列を渡して関数を呼ぶ。文字列はなんでもいいです。
- 戻り値をConsoleに表示する。
- 引数に、10文字未満の文字列を渡して関数を呼ぶ。文字列はなんでもいいです。
- 戻り値をConsoleに表示する。

