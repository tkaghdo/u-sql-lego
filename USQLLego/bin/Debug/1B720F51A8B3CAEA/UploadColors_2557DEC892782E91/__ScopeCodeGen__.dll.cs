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
				System.Int32 col_COLOR_ID = row.GetInternal<System.Int32>(0);
				System.String col_COLOR_NAME = row.GetInternal<System.String>(1);
				System.String col_COLOR_RGB = row.GetInternal<System.String>(2);
				System.String col_IS_TRANSPARENT = row.GetInternal<System.String>(3);
				output.SetInternal(0, col_COLOR_NAME.ToUpper());
				exceptionIndex++;
				output.SetInternal(1, col_IS_TRANSPARENT.ToUpper() == "T" ? "Y" : "N");
				exceptionIndex++;
				output.SetInternal(2, col_COLOR_ID);
				exceptionIndex++;
				output.SetInternal(3, col_COLOR_RGB);
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
			@"COLOR_NAME.ToUpper()",
			@"IS_TRANSPARENT.ToUpper() == ""T"" ? ""Y"" : ""N""",
			@"COLOR_ID",
			@"COLOR_RGB",
		};
	}


	public class SqlFilterTransformer_3 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			System.Int32 col_COLOR_ID = row.GetInternal<System.Int32>(0);
			System.String col_COLOR_NAME = row.GetInternal<System.String>(1);
			System.String col_COLOR_RGB = row.GetInternal<System.String>(2);
			System.String col_IS_TRANSPARENT = row.GetInternal<System.String>(3);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					output.SetInternal<System.Int32>(0, (col_COLOR_ID));
					exceptionIndex++;
					output.SetInternal<System.String>(1, (col_COLOR_NAME.ToUpper()));
					exceptionIndex++;
					output.SetInternal<System.String>(2, (col_COLOR_RGB));
					exceptionIndex++;
					output.SetInternal<System.String>(3, (col_IS_TRANSPARENT.ToUpper() == staticconstant_0 ? staticconstant_1 : staticconstant_2));
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
			@"COLOR_ID",
			@"COLOR_NAME.ToUpper()",
			@"COLOR_RGB",
			@"IS_TRANSPARENT.ToUpper() == ""T"" ? ""Y"" : ""N""",
		};		static string staticconstant_0 = "T";
		static string staticconstant_1 = "Y";
		static string staticconstant_2 = "N";

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
