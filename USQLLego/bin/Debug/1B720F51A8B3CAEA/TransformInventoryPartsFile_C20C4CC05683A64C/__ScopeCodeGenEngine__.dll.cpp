#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
enum OperatorUID
{
UID_Extract_0 = 1,
UID_Extract_0_Data0 = 2,
UID_Process_1 = 3,
UID_Process_1_Data0 = 4,
UID_SV1_Extract_out0 = 5,
UID_ParallelUnionAll_Extract_0
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class Extract_0_Data0
    {
    public:
        int m_INVENTORY_ID;
        FString m_PART_NUMBER;
        int m_COLOR_ID;
        int m_PART_QUANTITY;
        FString m_IS_SPARE;
        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        os << "\t" << std::string{ u8"INVENTORY_ID" } << ":\t" << row.m_INVENTORY_ID << endl;
        os << "\t" << std::string{ u8"PART_NUMBER" } << ":\t" << row.m_PART_NUMBER << endl;
        os << "\t" << std::string{ u8"COLOR_ID" } << ":\t" << row.m_COLOR_ID << endl;
        os << "\t" << std::string{ u8"PART_QUANTITY" } << ":\t" << row.m_PART_QUANTITY << endl;
        os << "\t" << std::string{ u8"IS_SPARE" } << ":\t" << row.m_IS_SPARE << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Extract_0_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(5);            
            offset[0] = ColumnOffsetId(offsetof(Extract_0_Data0, m_INVENTORY_ID), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(Extract_0_Data0, m_PART_NUMBER), T_String);
            offset[2] = ColumnOffsetId(offsetof(Extract_0_Data0, m_COLOR_ID), T_Integer);
            offset[3] = ColumnOffsetId(offsetof(Extract_0_Data0, m_PART_QUANTITY), T_Integer);
            offset[4] = ColumnOffsetId(offsetof(Extract_0_Data0, m_IS_SPARE), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(5);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("INVENTORY_ID"), System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("INVENTORY_ID")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("PART_NUMBER"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("PART_NUMBER")) >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("COLOR_ID"), System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("COLOR_ID")) >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("PART_QUANTITY"), System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("PART_QUANTITY")) >= 0, /*isSystem*/false);
            c[4] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("IS_SPARE"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("IS_SPARE")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Extract_0_Data0>::ComplexColumnGetter, &ManagedRow<Extract_0_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Extract_0_Data0>;    

#endif // defined(COMPILE_MANAGED)


//}

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
        m_INVENTORY_ID = 0;
        m_COLOR_ID = 0;
        m_PART_QUANTITY = 0;
    }
    INLINE Extract_0_Data0::Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc) :
            m_PART_NUMBER(c.m_PART_NUMBER, alloc),
            m_IS_SPARE(c.m_IS_SPARE, alloc)
    {
        m_INVENTORY_ID = c.m_INVENTORY_ID;
        m_COLOR_ID = c.m_COLOR_ID;
        m_PART_QUANTITY = c.m_PART_QUANTITY;
    }

#pragma endregion Schema Constructors
#pragma hdrstop
#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}
extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif
#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;
extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    ErrorManager::GetGlobal()->EnableJSON();

}
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}
#endif
#endif
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 1, CharFormat_uint16>, CosmosInput> * input, Extract_0_Data0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->Read(row.m_INVENTORY_ID);
                    input->Read(row.m_PART_NUMBER);
                    input->Read(row.m_COLOR_ID);
                    input->Read(row.m_PART_QUANTITY);
                    input->Read(row.m_IS_SPARE);

                    if (!input->EndRow())
                    {
                        // Too many columns in row - report error.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_ROW_DELIMITER_EXPECTED,
                            { input->CurrentLineNumber(), input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));
                    }
                    return true;
                }
                catch (const TextEncodingException& /* e */)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows throw exception
                    case ScopeStreamException::UnexpectedNewLine:
                        // Wrong number of columns in row - report error
                        // At this point, line number is increased to point at the next line. Subtract 1 to get line
                        // number of the offending row.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_UNEXPECTED_ROW_DELIMITER,
                            { input->CurrentLineNumber() - 1, 5, input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 6> c_columnNames =
            {
                "INVENTORY_ID",
                "PART_NUMBER",
                "COLOR_ID",
                "PART_QUANTITY",
                "IS_SPARE",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Extract_0_Data0, typename Extract_0_Data0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, Extract_0_Data0 & output, IncrementalAllocator * alloc)
        {
           output.m_INVENTORY_ID = input.m_INVENTORY_ID;
           output.m_PART_NUMBER = input.m_PART_NUMBER;
           output.m_COLOR_ID = input.m_COLOR_ID;
           output.m_PART_QUANTITY = input.m_PART_QUANTITY;
            return true;
        }


        #pragma warning(push)
        #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
        static __declspec(noinline) void InitializeStatics(IncrementalAllocator * alloc)
        {
        #pragma warning(pop)
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_1>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_1());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{})));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_1, "Constructor", ex);
                throw;
            }
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Extract_0_Data0, UID_Process_1>
    {
    public:
        static void Marshal(ScopeEngineManaged::SqlIpRow^ managedRow, Extract_0_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_IS_SPARE, managedRow->GetInternal<System::String^>(4), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Extract_0_Data0, UID_SV1_Extract_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Extract_0_Data0 & row)
        {
            output->Write<int,false>(row.m_INVENTORY_ID);
            output->WriteDelimiter();
            if (!row.m_PART_NUMBER.IsNull())
            {
                output->Write<FString,true>(row.m_PART_NUMBER);
            }
            output->WriteDelimiter();
            output->Write<int,false>(row.m_COLOR_ID);
            output->WriteDelimiter();
            output->Write<int,false>(row.m_PART_QUANTITY);
            output->WriteDelimiter();
            if (!row.m_IS_SPARE.IsNull())
            {
                output->Write<FString,true>(row.m_IS_SPARE);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("INVENTORY_ID", 12));
            output->WriteDelimiter();
            output->Write<string,true>(FString("PART_NUMBER", 11));
            output->WriteDelimiter();
            output->Write<string,true>(FString("COLOR_ID", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("PART_QUANTITY", 13));
            output->WriteDelimiter();
            output->Write<string,true>(FString("IS_SPARE", 8));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_0_Data0, TextExtractPolicy<Extract_0_Data0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 1, CharFormat_uint16>, CosmosInput>> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 1, CharFormat_uint16), UID_Extract_0));
        }
        ExtractorType1_SV1_Extract ** extractor_0 = (ExtractorType1_SV1_Extract **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extract, Extract_0_Data0, IsNativeOnlyVertex> UnionAllType_Extract_0_Process_1_connector;
        unique_ptr<UnionAllType_Extract_0_Process_1_connector> unionall_Extract_0_Process_1_connector_ptr(new UnionAllType_Extract_0_Process_1_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_0));
        UnionAllType_Extract_0_Process_1_connector * unionall_Extract_0_Process_1_connector = unionall_Extract_0_Process_1_connector_ptr.get();
        ULONG unionall_Extract_0_Process_1_connector_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Extract_0_Data0>> delegate_unionall_Extract_0_Process_1_connector_ptr (new OperatorDelegate<Extract_0_Data0>(OperatorDelegate<Extract_0_Data0>::FromOperator(unionall_Extract_0_Process_1_connector)));
        OperatorDelegate<Extract_0_Data0> * delegate_unionall_Extract_0_Process_1_connector = delegate_unionall_Extract_0_Process_1_connector_ptr.get();
        ULONG delegate_unionall_Extract_0_Process_1_connector_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Extract_0_Data0, Extract_0_Data0> ProcessorType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_1> processor_Process_1_ptr (new ProcessorType_Process_1(ScopeProcessorManagedFactory::MakeSqlIp<Extract_0_Data0,Extract_0_Data0,UID_Process_1>(delegate_unionall_Extract_0_Process_1_connector), delegate_unionall_Extract_0_Process_1_connector, UID_Process_1));
        ProcessorType_Process_1 * processor_Process_1 = processor_Process_1_ptr.get();
        ULONG processor_Process_1_count = 1;
        // Define outputer type
        typedef Outputer<ProcessorType_Process_1, Extract_0_Data0, TextOutputPolicy<Extract_0_Data0, UID_SV1_Extract_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(processor_Process_1, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Extract_0_Data0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV1_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Extract_0_Data0, Extract_0_Data0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<Extract_0_Data0, Extract_0_Data0, UID_Process_1>(OperatorDelegate<Extract_0_Data0>*);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV1_Extract
// Empty footer
