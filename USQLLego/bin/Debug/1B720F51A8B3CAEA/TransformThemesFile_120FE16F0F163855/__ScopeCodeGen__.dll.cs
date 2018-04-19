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
				System.Int32 col_THEME_ID = row.GetInternal<System.Int32>(0);
				System.String col_THEME_NAME = row.GetInternal<System.String>(1);
				System.Int32? col_THEME_PARENT_ID = row.GetInternal<System.Int32?>(2);
				output.SetInternal(0, col_THEME_NAME.ToUpper());
				exceptionIndex++;
				output.SetInternal(1, col_THEME_ID);
				exceptionIndex++;
				output.SetInternal(2, col_THEME_PARENT_ID);
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
			@"THEME_NAME.ToUpper()",
			@"THEME_ID",
			@"THEME_PARENT_ID",
		};
	}


	public class SqlFilterTransformer_3 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			System.Int32 col_THEME_ID = row.GetInternal<System.Int32>(0);
			System.String col_THEME_NAME = row.GetInternal<System.String>(1);
			System.Int32? col_THEME_PARENT_ID = row.GetInternal<System.Int32?>(2);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					output.SetInternal<System.Int32>(0, (col_THEME_ID));
					exceptionIndex++;
					output.SetInternal<System.String>(1, (col_THEME_NAME.ToUpper()));
					exceptionIndex++;
					output.SetInternal<System.Int32?>(2, (col_THEME_PARENT_ID));
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
			@"THEME_ID",
			@"THEME_NAME.ToUpper()",
			@"THEME_PARENT_ID",
		};
	}

































	public static class __OperatorFactory__
	{
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_1()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_3();
		}
		public static string Name_Process_1 = "___Scope_Generated_Classes___.SqlFilterTransformer_3";
	}
}
