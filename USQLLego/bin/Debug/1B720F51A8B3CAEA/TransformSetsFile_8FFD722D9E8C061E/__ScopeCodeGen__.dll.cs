using Microsoft.Analytics.Interfaces;
using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading;
using System.Runtime.Serialization;
using System.Linq;
using System.Globalization;
using Microsoft.Analytics.Types.Sql;
using System.Runtime.Versioning;
[assembly:TargetFramework(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")]

public class ___Scope_Generated_Classes___
{

	public class SqlTransformer_0 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			int exceptionIndex = 0;
			try
			{
				System.String col_SET_NUMBER = row.GetInternal<System.String>(0);
				System.String col_SET_NAME = row.GetInternal<System.String>(1);
				System.Int32 col_SET_YEAR = row.GetInternal<System.Int32>(2);
				System.String col_SET_THEME = row.GetInternal<System.String>(3);
				System.Int32 col_NUMBER_OF_PARTS = row.GetInternal<System.Int32>(4);
				output.SetInternal(0, col_SET_NUMBER.IndexOf("-") >= 0 ? col_SET_NUMBER.Substring(0, col_SET_NUMBER.IndexOf("-")) : col_SET_NUMBER);
				exceptionIndex++;
				output.SetInternal(1, col_SET_NUMBER.IndexOf("-") >= 0 ? col_SET_NUMBER.Substring(col_SET_NUMBER.IndexOf("-") + 1) : null);
				exceptionIndex++;
				output.SetInternal(2, col_SET_NAME.ToUpper());
				exceptionIndex++;
				output.SetInternal(3, col_SET_YEAR);
				exceptionIndex++;
				output.SetInternal(4, col_SET_THEME);
				exceptionIndex++;
				output.SetInternal(5, col_NUMBER_OF_PARTS);
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"SET_NUMBER.IndexOf(""-"") >= 0 ? SET_NUMBER.Substring(0, SET_NUMBER.IndexOf(""-"")) : SET_NUMBER",
			@"SET_NUMBER.IndexOf(""-"") >= 0 ? SET_NUMBER.Substring(SET_NUMBER.IndexOf(""-"") + 1) : null",
			@"SET_NAME.ToUpper()",
			@"SET_YEAR",
			@"SET_THEME",
			@"NUMBER_OF_PARTS",
		};
	}


	public class SqlFilterTransformer_2 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			System.String col_SET_NUMBER = row.GetInternal<System.String>(0);
			System.String col_SET_NAME = row.GetInternal<System.String>(1);
			System.Int32 col_SET_YEAR = row.GetInternal<System.Int32>(2);
			System.String col_SET_THEME = row.GetInternal<System.String>(3);
			System.Int32 col_NUMBER_OF_PARTS = row.GetInternal<System.Int32>(4);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					output.SetInternal<System.String>(0, (col_SET_NUMBER.IndexOf(staticconstant_0) >= 0 ? col_SET_NUMBER.Substring(0, col_SET_NUMBER.IndexOf(staticconstant_0)) : col_SET_NUMBER));
					exceptionIndex++;
					output.SetInternal<System.String>(1, (col_SET_NUMBER.IndexOf(staticconstant_1) >= 0 ? col_SET_NUMBER.Substring(col_SET_NUMBER.IndexOf(staticconstant_1) + 1) : null));
					exceptionIndex++;
					output.SetInternal<System.String>(2, (col_SET_NAME.ToUpper()));
					exceptionIndex++;
					output.SetInternal<System.Int32>(3, (col_SET_YEAR));
					exceptionIndex++;
					output.SetInternal<System.String>(4, (col_SET_THEME));
					exceptionIndex++;
					output.SetInternal<System.Int32>(5, (col_NUMBER_OF_PARTS));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"SET_NUMBER.IndexOf(""-"") >= 0 ? SET_NUMBER.Substring(0, SET_NUMBER.IndexOf(""-"")) : SET_NUMBER",
			@"SET_NUMBER.IndexOf(""-"") >= 0 ? SET_NUMBER.Substring(SET_NUMBER.IndexOf(""-"") + 1) : null",
			@"SET_NAME.ToUpper()",
			@"SET_YEAR",
			@"SET_THEME",
			@"NUMBER_OF_PARTS",
		};		static string staticconstant_0 = "-";
		static string staticconstant_1 = "-";

	}



































	public static class __OperatorFactory__
	{
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_1()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_2();
		}
		public static string Name_Process_1 = "___Scope_Generated_Classes___.SqlFilterTransformer_2";
	}
}
