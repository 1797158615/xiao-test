; ModuleID = 'sha.c'
source_filename = "sha.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%struct.SHA_INFO = type { [5 x i32], i32, i32, [16 x i32] }

@.str = private unnamed_addr constant [26 x i8] c"%08x %08x %08x %08x %08x\0A\00", align 1, !dbg !0
@.str.1 = private unnamed_addr constant [30 x i8] c"error opening %s for reading\0A\00", align 1, !dbg !7

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @sha_init(ptr noundef %0) #0 !dbg !33 {
  %2 = alloca ptr, align 8
  store ptr %0, ptr %2, align 8
  call void @llvm.dbg.declare(metadata ptr %2, metadata !51, metadata !DIExpression()), !dbg !52
  %3 = load ptr, ptr %2, align 8, !dbg !53
  %4 = getelementptr inbounds %struct.SHA_INFO, ptr %3, i32 0, i32 0, !dbg !54
  %5 = getelementptr inbounds [5 x i32], ptr %4, i64 0, i64 0, !dbg !53
  store i32 1732584193, ptr %5, align 4, !dbg !55
  %6 = load ptr, ptr %2, align 8, !dbg !56
  %7 = getelementptr inbounds %struct.SHA_INFO, ptr %6, i32 0, i32 0, !dbg !57
  %8 = getelementptr inbounds [5 x i32], ptr %7, i64 0, i64 1, !dbg !56
  store i32 -271733879, ptr %8, align 4, !dbg !58
  %9 = load ptr, ptr %2, align 8, !dbg !59
  %10 = getelementptr inbounds %struct.SHA_INFO, ptr %9, i32 0, i32 0, !dbg !60
  %11 = getelementptr inbounds [5 x i32], ptr %10, i64 0, i64 2, !dbg !59
  store i32 -1732584194, ptr %11, align 4, !dbg !61
  %12 = load ptr, ptr %2, align 8, !dbg !62
  %13 = getelementptr inbounds %struct.SHA_INFO, ptr %12, i32 0, i32 0, !dbg !63
  %14 = getelementptr inbounds [5 x i32], ptr %13, i64 0, i64 3, !dbg !62
  store i32 271733878, ptr %14, align 4, !dbg !64
  %15 = load ptr, ptr %2, align 8, !dbg !65
  %16 = getelementptr inbounds %struct.SHA_INFO, ptr %15, i32 0, i32 0, !dbg !66
  %17 = getelementptr inbounds [5 x i32], ptr %16, i64 0, i64 4, !dbg !65
  store i32 -1009589776, ptr %17, align 4, !dbg !67
  %18 = load ptr, ptr %2, align 8, !dbg !68
  %19 = getelementptr inbounds %struct.SHA_INFO, ptr %18, i32 0, i32 1, !dbg !69
  store i32 0, ptr %19, align 4, !dbg !70
  %20 = load ptr, ptr %2, align 8, !dbg !71
  %21 = getelementptr inbounds %struct.SHA_INFO, ptr %20, i32 0, i32 2, !dbg !72
  store i32 0, ptr %21, align 4, !dbg !73
  ret void, !dbg !74
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @sha_update(ptr noundef %0, ptr noundef %1, i32 noundef %2) #0 !dbg !75 {
  %4 = alloca ptr, align 8
  %5 = alloca ptr, align 8
  %6 = alloca i32, align 4
  store ptr %0, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !78, metadata !DIExpression()), !dbg !79
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !80, metadata !DIExpression()), !dbg !81
  store i32 %2, ptr %6, align 4
  call void @llvm.dbg.declare(metadata ptr %6, metadata !82, metadata !DIExpression()), !dbg !83
  %7 = load ptr, ptr %4, align 8, !dbg !84
  %8 = getelementptr inbounds %struct.SHA_INFO, ptr %7, i32 0, i32 1, !dbg !86
  %9 = load i32, ptr %8, align 4, !dbg !86
  %10 = load i32, ptr %6, align 4, !dbg !87
  %11 = shl i32 %10, 3, !dbg !88
  %12 = add i32 %9, %11, !dbg !89
  %13 = load ptr, ptr %4, align 8, !dbg !90
  %14 = getelementptr inbounds %struct.SHA_INFO, ptr %13, i32 0, i32 1, !dbg !91
  %15 = load i32, ptr %14, align 4, !dbg !91
  %16 = icmp ult i32 %12, %15, !dbg !92
  br i1 %16, label %17, label %22, !dbg !93

17:                                               ; preds = %3
  %18 = load ptr, ptr %4, align 8, !dbg !94
  %19 = getelementptr inbounds %struct.SHA_INFO, ptr %18, i32 0, i32 2, !dbg !96
  %20 = load i32, ptr %19, align 4, !dbg !97
  %21 = add i32 %20, 1, !dbg !97
  store i32 %21, ptr %19, align 4, !dbg !97
  br label %22, !dbg !98

22:                                               ; preds = %17, %3
  %23 = load i32, ptr %6, align 4, !dbg !99
  %24 = shl i32 %23, 3, !dbg !100
  %25 = load ptr, ptr %4, align 8, !dbg !101
  %26 = getelementptr inbounds %struct.SHA_INFO, ptr %25, i32 0, i32 1, !dbg !102
  %27 = load i32, ptr %26, align 4, !dbg !103
  %28 = add i32 %27, %24, !dbg !103
  store i32 %28, ptr %26, align 4, !dbg !103
  %29 = load i32, ptr %6, align 4, !dbg !104
  %30 = lshr i32 %29, 29, !dbg !105
  %31 = load ptr, ptr %4, align 8, !dbg !106
  %32 = getelementptr inbounds %struct.SHA_INFO, ptr %31, i32 0, i32 2, !dbg !107
  %33 = load i32, ptr %32, align 4, !dbg !108
  %34 = add i32 %33, %30, !dbg !108
  store i32 %34, ptr %32, align 4, !dbg !108
  br label %35, !dbg !109

35:                                               ; preds = %38, %22
  %36 = load i32, ptr %6, align 4, !dbg !110
  %37 = icmp sge i32 %36, 64, !dbg !111
  br i1 %37, label %38, label %51, !dbg !109

38:                                               ; preds = %35
  %39 = load ptr, ptr %4, align 8, !dbg !112
  %40 = getelementptr inbounds %struct.SHA_INFO, ptr %39, i32 0, i32 3, !dbg !114
  %41 = getelementptr inbounds [16 x i32], ptr %40, i64 0, i64 0, !dbg !115
  %42 = load ptr, ptr %5, align 8, !dbg !116
  call void @llvm.memcpy.p0.p0.i64(ptr align 4 %41, ptr align 1 %42, i64 64, i1 false), !dbg !115
  %43 = load ptr, ptr %4, align 8, !dbg !117
  %44 = getelementptr inbounds %struct.SHA_INFO, ptr %43, i32 0, i32 3, !dbg !118
  %45 = getelementptr inbounds [16 x i32], ptr %44, i64 0, i64 0, !dbg !117
  call void @byte_reverse(ptr noundef %45, i32 noundef 64), !dbg !119
  %46 = load ptr, ptr %4, align 8, !dbg !120
  call void @sha_transform(ptr noundef %46), !dbg !121
  %47 = load ptr, ptr %5, align 8, !dbg !122
  %48 = getelementptr inbounds i8, ptr %47, i64 64, !dbg !122
  store ptr %48, ptr %5, align 8, !dbg !122
  %49 = load i32, ptr %6, align 4, !dbg !123
  %50 = sub nsw i32 %49, 64, !dbg !123
  store i32 %50, ptr %6, align 4, !dbg !123
  br label %35, !dbg !109, !llvm.loop !124

51:                                               ; preds = %35
  %52 = load ptr, ptr %4, align 8, !dbg !127
  %53 = getelementptr inbounds %struct.SHA_INFO, ptr %52, i32 0, i32 3, !dbg !128
  %54 = getelementptr inbounds [16 x i32], ptr %53, i64 0, i64 0, !dbg !129
  %55 = load ptr, ptr %5, align 8, !dbg !130
  %56 = load i32, ptr %6, align 4, !dbg !131
  %57 = sext i32 %56 to i64, !dbg !131
  call void @llvm.memcpy.p0.p0.i64(ptr align 4 %54, ptr align 1 %55, i64 %57, i1 false), !dbg !129
  ret void, !dbg !132
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

; Function Attrs: noinline nounwind optnone uwtable
define internal void @byte_reverse(ptr noundef %0, i32 noundef %1) #0 !dbg !133 {
  %3 = alloca ptr, align 8
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca [4 x i8], align 1
  %7 = alloca ptr, align 8
  store ptr %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !137, metadata !DIExpression()), !dbg !138
  store i32 %1, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !139, metadata !DIExpression()), !dbg !140
  call void @llvm.dbg.declare(metadata ptr %5, metadata !141, metadata !DIExpression()), !dbg !142
  call void @llvm.dbg.declare(metadata ptr %6, metadata !143, metadata !DIExpression()), !dbg !147
  call void @llvm.dbg.declare(metadata ptr %7, metadata !148, metadata !DIExpression()), !dbg !149
  %8 = load i32, ptr %4, align 4, !dbg !150
  %9 = sext i32 %8 to i64, !dbg !150
  %10 = udiv i64 %9, 4, !dbg !150
  %11 = trunc i64 %10 to i32, !dbg !150
  store i32 %11, ptr %4, align 4, !dbg !150
  %12 = load ptr, ptr %3, align 8, !dbg !151
  store ptr %12, ptr %7, align 8, !dbg !152
  store i32 0, ptr %5, align 4, !dbg !153
  br label %13, !dbg !155

13:                                               ; preds = %52, %2
  %14 = load i32, ptr %5, align 4, !dbg !156
  %15 = load i32, ptr %4, align 4, !dbg !158
  %16 = icmp slt i32 %14, %15, !dbg !159
  br i1 %16, label %17, label %55, !dbg !160

17:                                               ; preds = %13
  %18 = load ptr, ptr %7, align 8, !dbg !161
  %19 = getelementptr inbounds i8, ptr %18, i64 0, !dbg !161
  %20 = load i8, ptr %19, align 1, !dbg !161
  %21 = getelementptr inbounds [4 x i8], ptr %6, i64 0, i64 0, !dbg !163
  store i8 %20, ptr %21, align 1, !dbg !164
  %22 = load ptr, ptr %7, align 8, !dbg !165
  %23 = getelementptr inbounds i8, ptr %22, i64 1, !dbg !165
  %24 = load i8, ptr %23, align 1, !dbg !165
  %25 = getelementptr inbounds [4 x i8], ptr %6, i64 0, i64 1, !dbg !166
  store i8 %24, ptr %25, align 1, !dbg !167
  %26 = load ptr, ptr %7, align 8, !dbg !168
  %27 = getelementptr inbounds i8, ptr %26, i64 2, !dbg !168
  %28 = load i8, ptr %27, align 1, !dbg !168
  %29 = getelementptr inbounds [4 x i8], ptr %6, i64 0, i64 2, !dbg !169
  store i8 %28, ptr %29, align 1, !dbg !170
  %30 = load ptr, ptr %7, align 8, !dbg !171
  %31 = getelementptr inbounds i8, ptr %30, i64 3, !dbg !171
  %32 = load i8, ptr %31, align 1, !dbg !171
  %33 = getelementptr inbounds [4 x i8], ptr %6, i64 0, i64 3, !dbg !172
  store i8 %32, ptr %33, align 1, !dbg !173
  %34 = getelementptr inbounds [4 x i8], ptr %6, i64 0, i64 3, !dbg !174
  %35 = load i8, ptr %34, align 1, !dbg !174
  %36 = load ptr, ptr %7, align 8, !dbg !175
  %37 = getelementptr inbounds i8, ptr %36, i64 0, !dbg !175
  store i8 %35, ptr %37, align 1, !dbg !176
  %38 = getelementptr inbounds [4 x i8], ptr %6, i64 0, i64 2, !dbg !177
  %39 = load i8, ptr %38, align 1, !dbg !177
  %40 = load ptr, ptr %7, align 8, !dbg !178
  %41 = getelementptr inbounds i8, ptr %40, i64 1, !dbg !178
  store i8 %39, ptr %41, align 1, !dbg !179
  %42 = getelementptr inbounds [4 x i8], ptr %6, i64 0, i64 1, !dbg !180
  %43 = load i8, ptr %42, align 1, !dbg !180
  %44 = load ptr, ptr %7, align 8, !dbg !181
  %45 = getelementptr inbounds i8, ptr %44, i64 2, !dbg !181
  store i8 %43, ptr %45, align 1, !dbg !182
  %46 = getelementptr inbounds [4 x i8], ptr %6, i64 0, i64 0, !dbg !183
  %47 = load i8, ptr %46, align 1, !dbg !183
  %48 = load ptr, ptr %7, align 8, !dbg !184
  %49 = getelementptr inbounds i8, ptr %48, i64 3, !dbg !184
  store i8 %47, ptr %49, align 1, !dbg !185
  %50 = load ptr, ptr %7, align 8, !dbg !186
  %51 = getelementptr inbounds i8, ptr %50, i64 4, !dbg !186
  store ptr %51, ptr %7, align 8, !dbg !186
  br label %52, !dbg !187

52:                                               ; preds = %17
  %53 = load i32, ptr %5, align 4, !dbg !188
  %54 = add nsw i32 %53, 1, !dbg !188
  store i32 %54, ptr %5, align 4, !dbg !188
  br label %13, !dbg !189, !llvm.loop !190

55:                                               ; preds = %13
  ret void, !dbg !192
}

; Function Attrs: noinline nounwind optnone uwtable
define internal void @sha_transform(ptr noundef %0) #0 !dbg !193 {
  %2 = alloca ptr, align 8
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca [80 x i32], align 16
  store ptr %0, ptr %2, align 8
  call void @llvm.dbg.declare(metadata ptr %2, metadata !194, metadata !DIExpression()), !dbg !195
  call void @llvm.dbg.declare(metadata ptr %3, metadata !196, metadata !DIExpression()), !dbg !197
  call void @llvm.dbg.declare(metadata ptr %4, metadata !198, metadata !DIExpression()), !dbg !199
  call void @llvm.dbg.declare(metadata ptr %5, metadata !200, metadata !DIExpression()), !dbg !201
  call void @llvm.dbg.declare(metadata ptr %6, metadata !202, metadata !DIExpression()), !dbg !203
  call void @llvm.dbg.declare(metadata ptr %7, metadata !204, metadata !DIExpression()), !dbg !205
  call void @llvm.dbg.declare(metadata ptr %8, metadata !206, metadata !DIExpression()), !dbg !207
  call void @llvm.dbg.declare(metadata ptr %9, metadata !208, metadata !DIExpression()), !dbg !209
  call void @llvm.dbg.declare(metadata ptr %10, metadata !210, metadata !DIExpression()), !dbg !214
  store i32 0, ptr %3, align 4, !dbg !215
  br label %11, !dbg !217

11:                                               ; preds = %24, %1
  %12 = load i32, ptr %3, align 4, !dbg !218
  %13 = icmp slt i32 %12, 16, !dbg !220
  br i1 %13, label %14, label %27, !dbg !221

14:                                               ; preds = %11
  %15 = load ptr, ptr %2, align 8, !dbg !222
  %16 = getelementptr inbounds %struct.SHA_INFO, ptr %15, i32 0, i32 3, !dbg !224
  %17 = load i32, ptr %3, align 4, !dbg !225
  %18 = sext i32 %17 to i64, !dbg !222
  %19 = getelementptr inbounds [16 x i32], ptr %16, i64 0, i64 %18, !dbg !222
  %20 = load i32, ptr %19, align 4, !dbg !222
  %21 = load i32, ptr %3, align 4, !dbg !226
  %22 = sext i32 %21 to i64, !dbg !227
  %23 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %22, !dbg !227
  store i32 %20, ptr %23, align 4, !dbg !228
  br label %24, !dbg !229

24:                                               ; preds = %14
  %25 = load i32, ptr %3, align 4, !dbg !230
  %26 = add nsw i32 %25, 1, !dbg !230
  store i32 %26, ptr %3, align 4, !dbg !230
  br label %11, !dbg !231, !llvm.loop !232

27:                                               ; preds = %11
  store i32 16, ptr %3, align 4, !dbg !234
  br label %28, !dbg !236

28:                                               ; preds = %58, %27
  %29 = load i32, ptr %3, align 4, !dbg !237
  %30 = icmp slt i32 %29, 80, !dbg !239
  br i1 %30, label %31, label %61, !dbg !240

31:                                               ; preds = %28
  %32 = load i32, ptr %3, align 4, !dbg !241
  %33 = sub nsw i32 %32, 3, !dbg !243
  %34 = sext i32 %33 to i64, !dbg !244
  %35 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %34, !dbg !244
  %36 = load i32, ptr %35, align 4, !dbg !244
  %37 = load i32, ptr %3, align 4, !dbg !245
  %38 = sub nsw i32 %37, 8, !dbg !246
  %39 = sext i32 %38 to i64, !dbg !247
  %40 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %39, !dbg !247
  %41 = load i32, ptr %40, align 4, !dbg !247
  %42 = xor i32 %36, %41, !dbg !248
  %43 = load i32, ptr %3, align 4, !dbg !249
  %44 = sub nsw i32 %43, 14, !dbg !250
  %45 = sext i32 %44 to i64, !dbg !251
  %46 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %45, !dbg !251
  %47 = load i32, ptr %46, align 4, !dbg !251
  %48 = xor i32 %42, %47, !dbg !252
  %49 = load i32, ptr %3, align 4, !dbg !253
  %50 = sub nsw i32 %49, 16, !dbg !254
  %51 = sext i32 %50 to i64, !dbg !255
  %52 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %51, !dbg !255
  %53 = load i32, ptr %52, align 4, !dbg !255
  %54 = xor i32 %48, %53, !dbg !256
  %55 = load i32, ptr %3, align 4, !dbg !257
  %56 = sext i32 %55 to i64, !dbg !258
  %57 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %56, !dbg !258
  store i32 %54, ptr %57, align 4, !dbg !259
  br label %58, !dbg !260

58:                                               ; preds = %31
  %59 = load i32, ptr %3, align 4, !dbg !261
  %60 = add nsw i32 %59, 1, !dbg !261
  store i32 %60, ptr %3, align 4, !dbg !261
  br label %28, !dbg !262, !llvm.loop !263

61:                                               ; preds = %28
  %62 = load ptr, ptr %2, align 8, !dbg !265
  %63 = getelementptr inbounds %struct.SHA_INFO, ptr %62, i32 0, i32 0, !dbg !266
  %64 = getelementptr inbounds [5 x i32], ptr %63, i64 0, i64 0, !dbg !265
  %65 = load i32, ptr %64, align 4, !dbg !265
  store i32 %65, ptr %5, align 4, !dbg !267
  %66 = load ptr, ptr %2, align 8, !dbg !268
  %67 = getelementptr inbounds %struct.SHA_INFO, ptr %66, i32 0, i32 0, !dbg !269
  %68 = getelementptr inbounds [5 x i32], ptr %67, i64 0, i64 1, !dbg !268
  %69 = load i32, ptr %68, align 4, !dbg !268
  store i32 %69, ptr %6, align 4, !dbg !270
  %70 = load ptr, ptr %2, align 8, !dbg !271
  %71 = getelementptr inbounds %struct.SHA_INFO, ptr %70, i32 0, i32 0, !dbg !272
  %72 = getelementptr inbounds [5 x i32], ptr %71, i64 0, i64 2, !dbg !271
  %73 = load i32, ptr %72, align 4, !dbg !271
  store i32 %73, ptr %7, align 4, !dbg !273
  %74 = load ptr, ptr %2, align 8, !dbg !274
  %75 = getelementptr inbounds %struct.SHA_INFO, ptr %74, i32 0, i32 0, !dbg !275
  %76 = getelementptr inbounds [5 x i32], ptr %75, i64 0, i64 3, !dbg !274
  %77 = load i32, ptr %76, align 4, !dbg !274
  store i32 %77, ptr %8, align 4, !dbg !276
  %78 = load ptr, ptr %2, align 8, !dbg !277
  %79 = getelementptr inbounds %struct.SHA_INFO, ptr %78, i32 0, i32 0, !dbg !278
  %80 = getelementptr inbounds [5 x i32], ptr %79, i64 0, i64 4, !dbg !277
  %81 = load i32, ptr %80, align 4, !dbg !277
  store i32 %81, ptr %9, align 4, !dbg !279
  store i32 0, ptr %3, align 4, !dbg !280
  br label %82, !dbg !282

82:                                               ; preds = %119, %61
  %83 = load i32, ptr %3, align 4, !dbg !283
  %84 = icmp slt i32 %83, 20, !dbg !285
  br i1 %84, label %85, label %122, !dbg !286

85:                                               ; preds = %82
  %86 = load i32, ptr %5, align 4, !dbg !287
  %87 = shl i32 %86, 5, !dbg !287
  %88 = load i32, ptr %5, align 4, !dbg !287
  %89 = lshr i32 %88, 27, !dbg !287
  %90 = or i32 %87, %89, !dbg !287
  %91 = load i32, ptr %6, align 4, !dbg !287
  %92 = load i32, ptr %7, align 4, !dbg !287
  %93 = and i32 %91, %92, !dbg !287
  %94 = load i32, ptr %6, align 4, !dbg !287
  %95 = xor i32 %94, -1, !dbg !287
  %96 = load i32, ptr %8, align 4, !dbg !287
  %97 = and i32 %95, %96, !dbg !287
  %98 = or i32 %93, %97, !dbg !287
  %99 = add i32 %90, %98, !dbg !287
  %100 = load i32, ptr %9, align 4, !dbg !287
  %101 = add i32 %99, %100, !dbg !287
  %102 = load i32, ptr %3, align 4, !dbg !287
  %103 = sext i32 %102 to i64, !dbg !287
  %104 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %103, !dbg !287
  %105 = load i32, ptr %104, align 4, !dbg !287
  %106 = add i32 %101, %105, !dbg !287
  %107 = zext i32 %106 to i64, !dbg !287
  %108 = add nsw i64 %107, 1518500249, !dbg !287
  %109 = trunc i64 %108 to i32, !dbg !287
  store i32 %109, ptr %4, align 4, !dbg !287
  %110 = load i32, ptr %8, align 4, !dbg !287
  store i32 %110, ptr %9, align 4, !dbg !287
  %111 = load i32, ptr %7, align 4, !dbg !287
  store i32 %111, ptr %8, align 4, !dbg !287
  %112 = load i32, ptr %6, align 4, !dbg !287
  %113 = shl i32 %112, 30, !dbg !287
  %114 = load i32, ptr %6, align 4, !dbg !287
  %115 = lshr i32 %114, 2, !dbg !287
  %116 = or i32 %113, %115, !dbg !287
  store i32 %116, ptr %7, align 4, !dbg !287
  %117 = load i32, ptr %5, align 4, !dbg !287
  store i32 %117, ptr %6, align 4, !dbg !287
  %118 = load i32, ptr %4, align 4, !dbg !287
  store i32 %118, ptr %5, align 4, !dbg !287
  br label %119, !dbg !289

119:                                              ; preds = %85
  %120 = load i32, ptr %3, align 4, !dbg !290
  %121 = add nsw i32 %120, 1, !dbg !290
  store i32 %121, ptr %3, align 4, !dbg !290
  br label %82, !dbg !291, !llvm.loop !292

122:                                              ; preds = %82
  store i32 20, ptr %3, align 4, !dbg !294
  br label %123, !dbg !296

123:                                              ; preds = %157, %122
  %124 = load i32, ptr %3, align 4, !dbg !297
  %125 = icmp slt i32 %124, 40, !dbg !299
  br i1 %125, label %126, label %160, !dbg !300

126:                                              ; preds = %123
  %127 = load i32, ptr %5, align 4, !dbg !301
  %128 = shl i32 %127, 5, !dbg !301
  %129 = load i32, ptr %5, align 4, !dbg !301
  %130 = lshr i32 %129, 27, !dbg !301
  %131 = or i32 %128, %130, !dbg !301
  %132 = load i32, ptr %6, align 4, !dbg !301
  %133 = load i32, ptr %7, align 4, !dbg !301
  %134 = xor i32 %132, %133, !dbg !301
  %135 = load i32, ptr %8, align 4, !dbg !301
  %136 = xor i32 %134, %135, !dbg !301
  %137 = add i32 %131, %136, !dbg !301
  %138 = load i32, ptr %9, align 4, !dbg !301
  %139 = add i32 %137, %138, !dbg !301
  %140 = load i32, ptr %3, align 4, !dbg !301
  %141 = sext i32 %140 to i64, !dbg !301
  %142 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %141, !dbg !301
  %143 = load i32, ptr %142, align 4, !dbg !301
  %144 = add i32 %139, %143, !dbg !301
  %145 = zext i32 %144 to i64, !dbg !301
  %146 = add nsw i64 %145, 1859775393, !dbg !301
  %147 = trunc i64 %146 to i32, !dbg !301
  store i32 %147, ptr %4, align 4, !dbg !301
  %148 = load i32, ptr %8, align 4, !dbg !301
  store i32 %148, ptr %9, align 4, !dbg !301
  %149 = load i32, ptr %7, align 4, !dbg !301
  store i32 %149, ptr %8, align 4, !dbg !301
  %150 = load i32, ptr %6, align 4, !dbg !301
  %151 = shl i32 %150, 30, !dbg !301
  %152 = load i32, ptr %6, align 4, !dbg !301
  %153 = lshr i32 %152, 2, !dbg !301
  %154 = or i32 %151, %153, !dbg !301
  store i32 %154, ptr %7, align 4, !dbg !301
  %155 = load i32, ptr %5, align 4, !dbg !301
  store i32 %155, ptr %6, align 4, !dbg !301
  %156 = load i32, ptr %4, align 4, !dbg !301
  store i32 %156, ptr %5, align 4, !dbg !301
  br label %157, !dbg !303

157:                                              ; preds = %126
  %158 = load i32, ptr %3, align 4, !dbg !304
  %159 = add nsw i32 %158, 1, !dbg !304
  store i32 %159, ptr %3, align 4, !dbg !304
  br label %123, !dbg !305, !llvm.loop !306

160:                                              ; preds = %123
  store i32 40, ptr %3, align 4, !dbg !308
  br label %161, !dbg !310

161:                                              ; preds = %201, %160
  %162 = load i32, ptr %3, align 4, !dbg !311
  %163 = icmp slt i32 %162, 60, !dbg !313
  br i1 %163, label %164, label %204, !dbg !314

164:                                              ; preds = %161
  %165 = load i32, ptr %5, align 4, !dbg !315
  %166 = shl i32 %165, 5, !dbg !315
  %167 = load i32, ptr %5, align 4, !dbg !315
  %168 = lshr i32 %167, 27, !dbg !315
  %169 = or i32 %166, %168, !dbg !315
  %170 = load i32, ptr %6, align 4, !dbg !315
  %171 = load i32, ptr %7, align 4, !dbg !315
  %172 = and i32 %170, %171, !dbg !315
  %173 = load i32, ptr %6, align 4, !dbg !315
  %174 = load i32, ptr %8, align 4, !dbg !315
  %175 = and i32 %173, %174, !dbg !315
  %176 = or i32 %172, %175, !dbg !315
  %177 = load i32, ptr %7, align 4, !dbg !315
  %178 = load i32, ptr %8, align 4, !dbg !315
  %179 = and i32 %177, %178, !dbg !315
  %180 = or i32 %176, %179, !dbg !315
  %181 = add i32 %169, %180, !dbg !315
  %182 = load i32, ptr %9, align 4, !dbg !315
  %183 = add i32 %181, %182, !dbg !315
  %184 = load i32, ptr %3, align 4, !dbg !315
  %185 = sext i32 %184 to i64, !dbg !315
  %186 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %185, !dbg !315
  %187 = load i32, ptr %186, align 4, !dbg !315
  %188 = add i32 %183, %187, !dbg !315
  %189 = zext i32 %188 to i64, !dbg !315
  %190 = add nsw i64 %189, 2400959708, !dbg !315
  %191 = trunc i64 %190 to i32, !dbg !315
  store i32 %191, ptr %4, align 4, !dbg !315
  %192 = load i32, ptr %8, align 4, !dbg !315
  store i32 %192, ptr %9, align 4, !dbg !315
  %193 = load i32, ptr %7, align 4, !dbg !315
  store i32 %193, ptr %8, align 4, !dbg !315
  %194 = load i32, ptr %6, align 4, !dbg !315
  %195 = shl i32 %194, 30, !dbg !315
  %196 = load i32, ptr %6, align 4, !dbg !315
  %197 = lshr i32 %196, 2, !dbg !315
  %198 = or i32 %195, %197, !dbg !315
  store i32 %198, ptr %7, align 4, !dbg !315
  %199 = load i32, ptr %5, align 4, !dbg !315
  store i32 %199, ptr %6, align 4, !dbg !315
  %200 = load i32, ptr %4, align 4, !dbg !315
  store i32 %200, ptr %5, align 4, !dbg !315
  br label %201, !dbg !317

201:                                              ; preds = %164
  %202 = load i32, ptr %3, align 4, !dbg !318
  %203 = add nsw i32 %202, 1, !dbg !318
  store i32 %203, ptr %3, align 4, !dbg !318
  br label %161, !dbg !319, !llvm.loop !320

204:                                              ; preds = %161
  store i32 60, ptr %3, align 4, !dbg !322
  br label %205, !dbg !324

205:                                              ; preds = %239, %204
  %206 = load i32, ptr %3, align 4, !dbg !325
  %207 = icmp slt i32 %206, 80, !dbg !327
  br i1 %207, label %208, label %242, !dbg !328

208:                                              ; preds = %205
  %209 = load i32, ptr %5, align 4, !dbg !329
  %210 = shl i32 %209, 5, !dbg !329
  %211 = load i32, ptr %5, align 4, !dbg !329
  %212 = lshr i32 %211, 27, !dbg !329
  %213 = or i32 %210, %212, !dbg !329
  %214 = load i32, ptr %6, align 4, !dbg !329
  %215 = load i32, ptr %7, align 4, !dbg !329
  %216 = xor i32 %214, %215, !dbg !329
  %217 = load i32, ptr %8, align 4, !dbg !329
  %218 = xor i32 %216, %217, !dbg !329
  %219 = add i32 %213, %218, !dbg !329
  %220 = load i32, ptr %9, align 4, !dbg !329
  %221 = add i32 %219, %220, !dbg !329
  %222 = load i32, ptr %3, align 4, !dbg !329
  %223 = sext i32 %222 to i64, !dbg !329
  %224 = getelementptr inbounds [80 x i32], ptr %10, i64 0, i64 %223, !dbg !329
  %225 = load i32, ptr %224, align 4, !dbg !329
  %226 = add i32 %221, %225, !dbg !329
  %227 = zext i32 %226 to i64, !dbg !329
  %228 = add nsw i64 %227, 3395469782, !dbg !329
  %229 = trunc i64 %228 to i32, !dbg !329
  store i32 %229, ptr %4, align 4, !dbg !329
  %230 = load i32, ptr %8, align 4, !dbg !329
  store i32 %230, ptr %9, align 4, !dbg !329
  %231 = load i32, ptr %7, align 4, !dbg !329
  store i32 %231, ptr %8, align 4, !dbg !329
  %232 = load i32, ptr %6, align 4, !dbg !329
  %233 = shl i32 %232, 30, !dbg !329
  %234 = load i32, ptr %6, align 4, !dbg !329
  %235 = lshr i32 %234, 2, !dbg !329
  %236 = or i32 %233, %235, !dbg !329
  store i32 %236, ptr %7, align 4, !dbg !329
  %237 = load i32, ptr %5, align 4, !dbg !329
  store i32 %237, ptr %6, align 4, !dbg !329
  %238 = load i32, ptr %4, align 4, !dbg !329
  store i32 %238, ptr %5, align 4, !dbg !329
  br label %239, !dbg !331

239:                                              ; preds = %208
  %240 = load i32, ptr %3, align 4, !dbg !332
  %241 = add nsw i32 %240, 1, !dbg !332
  store i32 %241, ptr %3, align 4, !dbg !332
  br label %205, !dbg !333, !llvm.loop !334

242:                                              ; preds = %205
  %243 = load i32, ptr %5, align 4, !dbg !336
  %244 = load ptr, ptr %2, align 8, !dbg !337
  %245 = getelementptr inbounds %struct.SHA_INFO, ptr %244, i32 0, i32 0, !dbg !338
  %246 = getelementptr inbounds [5 x i32], ptr %245, i64 0, i64 0, !dbg !337
  %247 = load i32, ptr %246, align 4, !dbg !339
  %248 = add i32 %247, %243, !dbg !339
  store i32 %248, ptr %246, align 4, !dbg !339
  %249 = load i32, ptr %6, align 4, !dbg !340
  %250 = load ptr, ptr %2, align 8, !dbg !341
  %251 = getelementptr inbounds %struct.SHA_INFO, ptr %250, i32 0, i32 0, !dbg !342
  %252 = getelementptr inbounds [5 x i32], ptr %251, i64 0, i64 1, !dbg !341
  %253 = load i32, ptr %252, align 4, !dbg !343
  %254 = add i32 %253, %249, !dbg !343
  store i32 %254, ptr %252, align 4, !dbg !343
  %255 = load i32, ptr %7, align 4, !dbg !344
  %256 = load ptr, ptr %2, align 8, !dbg !345
  %257 = getelementptr inbounds %struct.SHA_INFO, ptr %256, i32 0, i32 0, !dbg !346
  %258 = getelementptr inbounds [5 x i32], ptr %257, i64 0, i64 2, !dbg !345
  %259 = load i32, ptr %258, align 4, !dbg !347
  %260 = add i32 %259, %255, !dbg !347
  store i32 %260, ptr %258, align 4, !dbg !347
  %261 = load i32, ptr %8, align 4, !dbg !348
  %262 = load ptr, ptr %2, align 8, !dbg !349
  %263 = getelementptr inbounds %struct.SHA_INFO, ptr %262, i32 0, i32 0, !dbg !350
  %264 = getelementptr inbounds [5 x i32], ptr %263, i64 0, i64 3, !dbg !349
  %265 = load i32, ptr %264, align 4, !dbg !351
  %266 = add i32 %265, %261, !dbg !351
  store i32 %266, ptr %264, align 4, !dbg !351
  %267 = load i32, ptr %9, align 4, !dbg !352
  %268 = load ptr, ptr %2, align 8, !dbg !353
  %269 = getelementptr inbounds %struct.SHA_INFO, ptr %268, i32 0, i32 0, !dbg !354
  %270 = getelementptr inbounds [5 x i32], ptr %269, i64 0, i64 4, !dbg !353
  %271 = load i32, ptr %270, align 4, !dbg !355
  %272 = add i32 %271, %267, !dbg !355
  store i32 %272, ptr %270, align 4, !dbg !355
  ret void, !dbg !356
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @sha_final(ptr noundef %0) #0 !dbg !357 {
  %2 = alloca ptr, align 8
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store ptr %0, ptr %2, align 8
  call void @llvm.dbg.declare(metadata ptr %2, metadata !358, metadata !DIExpression()), !dbg !359
  call void @llvm.dbg.declare(metadata ptr %3, metadata !360, metadata !DIExpression()), !dbg !361
  call void @llvm.dbg.declare(metadata ptr %4, metadata !362, metadata !DIExpression()), !dbg !363
  call void @llvm.dbg.declare(metadata ptr %5, metadata !364, metadata !DIExpression()), !dbg !365
  %6 = load ptr, ptr %2, align 8, !dbg !366
  %7 = getelementptr inbounds %struct.SHA_INFO, ptr %6, i32 0, i32 1, !dbg !367
  %8 = load i32, ptr %7, align 4, !dbg !367
  store i32 %8, ptr %4, align 4, !dbg !368
  %9 = load ptr, ptr %2, align 8, !dbg !369
  %10 = getelementptr inbounds %struct.SHA_INFO, ptr %9, i32 0, i32 2, !dbg !370
  %11 = load i32, ptr %10, align 4, !dbg !370
  store i32 %11, ptr %5, align 4, !dbg !371
  %12 = load i32, ptr %4, align 4, !dbg !372
  %13 = lshr i32 %12, 3, !dbg !373
  %14 = and i32 %13, 63, !dbg !374
  store i32 %14, ptr %3, align 4, !dbg !375
  %15 = load ptr, ptr %2, align 8, !dbg !376
  %16 = getelementptr inbounds %struct.SHA_INFO, ptr %15, i32 0, i32 3, !dbg !377
  %17 = getelementptr inbounds [16 x i32], ptr %16, i64 0, i64 0, !dbg !378
  %18 = load i32, ptr %3, align 4, !dbg !379
  %19 = add nsw i32 %18, 1, !dbg !379
  store i32 %19, ptr %3, align 4, !dbg !379
  %20 = sext i32 %18 to i64, !dbg !378
  %21 = getelementptr inbounds i8, ptr %17, i64 %20, !dbg !378
  store i8 -128, ptr %21, align 1, !dbg !380
  %22 = load i32, ptr %3, align 4, !dbg !381
  %23 = icmp sgt i32 %22, 56, !dbg !383
  br i1 %23, label %24, label %39, !dbg !384

24:                                               ; preds = %1
  %25 = load ptr, ptr %2, align 8, !dbg !385
  %26 = getelementptr inbounds %struct.SHA_INFO, ptr %25, i32 0, i32 3, !dbg !387
  %27 = load i32, ptr %3, align 4, !dbg !388
  %28 = sext i32 %27 to i64, !dbg !389
  %29 = getelementptr inbounds i8, ptr %26, i64 %28, !dbg !389
  %30 = load i32, ptr %3, align 4, !dbg !390
  %31 = sub nsw i32 64, %30, !dbg !391
  %32 = sext i32 %31 to i64, !dbg !392
  call void @llvm.memset.p0.i64(ptr align 1 %29, i8 0, i64 %32, i1 false), !dbg !393
  %33 = load ptr, ptr %2, align 8, !dbg !394
  %34 = getelementptr inbounds %struct.SHA_INFO, ptr %33, i32 0, i32 3, !dbg !395
  %35 = getelementptr inbounds [16 x i32], ptr %34, i64 0, i64 0, !dbg !394
  call void @byte_reverse(ptr noundef %35, i32 noundef 64), !dbg !396
  %36 = load ptr, ptr %2, align 8, !dbg !397
  call void @sha_transform(ptr noundef %36), !dbg !398
  %37 = load ptr, ptr %2, align 8, !dbg !399
  %38 = getelementptr inbounds %struct.SHA_INFO, ptr %37, i32 0, i32 3, !dbg !400
  call void @llvm.memset.p0.i64(ptr align 4 %38, i8 0, i64 56, i1 false), !dbg !401
  br label %48, !dbg !402

39:                                               ; preds = %1
  %40 = load ptr, ptr %2, align 8, !dbg !403
  %41 = getelementptr inbounds %struct.SHA_INFO, ptr %40, i32 0, i32 3, !dbg !405
  %42 = load i32, ptr %3, align 4, !dbg !406
  %43 = sext i32 %42 to i64, !dbg !407
  %44 = getelementptr inbounds i8, ptr %41, i64 %43, !dbg !407
  %45 = load i32, ptr %3, align 4, !dbg !408
  %46 = sub nsw i32 56, %45, !dbg !409
  %47 = sext i32 %46 to i64, !dbg !410
  call void @llvm.memset.p0.i64(ptr align 1 %44, i8 0, i64 %47, i1 false), !dbg !411
  br label %48

48:                                               ; preds = %39, %24
  %49 = load ptr, ptr %2, align 8, !dbg !412
  %50 = getelementptr inbounds %struct.SHA_INFO, ptr %49, i32 0, i32 3, !dbg !413
  %51 = getelementptr inbounds [16 x i32], ptr %50, i64 0, i64 0, !dbg !412
  call void @byte_reverse(ptr noundef %51, i32 noundef 64), !dbg !414
  %52 = load i32, ptr %5, align 4, !dbg !415
  %53 = load ptr, ptr %2, align 8, !dbg !416
  %54 = getelementptr inbounds %struct.SHA_INFO, ptr %53, i32 0, i32 3, !dbg !417
  %55 = getelementptr inbounds [16 x i32], ptr %54, i64 0, i64 14, !dbg !416
  store i32 %52, ptr %55, align 4, !dbg !418
  %56 = load i32, ptr %4, align 4, !dbg !419
  %57 = load ptr, ptr %2, align 8, !dbg !420
  %58 = getelementptr inbounds %struct.SHA_INFO, ptr %57, i32 0, i32 3, !dbg !421
  %59 = getelementptr inbounds [16 x i32], ptr %58, i64 0, i64 15, !dbg !420
  store i32 %56, ptr %59, align 4, !dbg !422
  %60 = load ptr, ptr %2, align 8, !dbg !423
  call void @sha_transform(ptr noundef %60), !dbg !424
  ret void, !dbg !425
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: write)
declare void @llvm.memset.p0.i64(ptr nocapture writeonly, i8, i64, i1 immarg) #3

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @sha_stream(ptr noundef %0, ptr noundef %1) #0 !dbg !426 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca [8192 x i8], align 16
  store ptr %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !430, metadata !DIExpression()), !dbg !431
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !432, metadata !DIExpression()), !dbg !433
  call void @llvm.dbg.declare(metadata ptr %5, metadata !434, metadata !DIExpression()), !dbg !435
  call void @llvm.dbg.declare(metadata ptr %6, metadata !436, metadata !DIExpression()), !dbg !440
  %7 = load ptr, ptr %3, align 8, !dbg !441
  call void @sha_init(ptr noundef %7), !dbg !442
  br label %8, !dbg !443

8:                                                ; preds = %15, %2
  %9 = load ptr, ptr %4, align 8, !dbg !444
  %10 = load i32, ptr %9, align 4, !dbg !445
  %11 = getelementptr inbounds [8192 x i8], ptr %6, i64 0, i64 0, !dbg !446
  %12 = call i64 @read(i32 noundef %10, ptr noundef %11, i64 noundef 8192), !dbg !447
  %13 = trunc i64 %12 to i32, !dbg !447
  store i32 %13, ptr %5, align 4, !dbg !448
  %14 = icmp sgt i32 %13, 0, !dbg !449
  br i1 %14, label %15, label %19, !dbg !443

15:                                               ; preds = %8
  %16 = load ptr, ptr %3, align 8, !dbg !450
  %17 = getelementptr inbounds [8192 x i8], ptr %6, i64 0, i64 0, !dbg !452
  %18 = load i32, ptr %5, align 4, !dbg !453
  call void @sha_update(ptr noundef %16, ptr noundef %17, i32 noundef %18), !dbg !454
  br label %8, !dbg !443, !llvm.loop !455

19:                                               ; preds = %8
  %20 = load ptr, ptr %3, align 8, !dbg !457
  call void @sha_final(ptr noundef %20), !dbg !458
  ret i32 0, !dbg !459
}

declare i64 @read(i32 noundef, ptr noundef, i64 noundef) #4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @sha_print(ptr noundef %0) #0 !dbg !460 {
  %2 = alloca ptr, align 8
  store ptr %0, ptr %2, align 8
  call void @llvm.dbg.declare(metadata ptr %2, metadata !461, metadata !DIExpression()), !dbg !462
  %3 = load ptr, ptr %2, align 8, !dbg !463
  %4 = getelementptr inbounds %struct.SHA_INFO, ptr %3, i32 0, i32 0, !dbg !464
  %5 = getelementptr inbounds [5 x i32], ptr %4, i64 0, i64 0, !dbg !463
  %6 = load i32, ptr %5, align 4, !dbg !463
  %7 = load ptr, ptr %2, align 8, !dbg !465
  %8 = getelementptr inbounds %struct.SHA_INFO, ptr %7, i32 0, i32 0, !dbg !466
  %9 = getelementptr inbounds [5 x i32], ptr %8, i64 0, i64 1, !dbg !465
  %10 = load i32, ptr %9, align 4, !dbg !465
  %11 = load ptr, ptr %2, align 8, !dbg !467
  %12 = getelementptr inbounds %struct.SHA_INFO, ptr %11, i32 0, i32 0, !dbg !468
  %13 = getelementptr inbounds [5 x i32], ptr %12, i64 0, i64 2, !dbg !467
  %14 = load i32, ptr %13, align 4, !dbg !467
  %15 = load ptr, ptr %2, align 8, !dbg !469
  %16 = getelementptr inbounds %struct.SHA_INFO, ptr %15, i32 0, i32 0, !dbg !470
  %17 = getelementptr inbounds [5 x i32], ptr %16, i64 0, i64 3, !dbg !469
  %18 = load i32, ptr %17, align 4, !dbg !469
  %19 = load ptr, ptr %2, align 8, !dbg !471
  %20 = getelementptr inbounds %struct.SHA_INFO, ptr %19, i32 0, i32 0, !dbg !472
  %21 = getelementptr inbounds [5 x i32], ptr %20, i64 0, i64 4, !dbg !471
  %22 = load i32, ptr %21, align 4, !dbg !471
  %23 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %6, i32 noundef %10, i32 noundef %14, i32 noundef %18, i32 noundef %22), !dbg !473
  ret void, !dbg !474
}

declare i32 @printf(ptr noundef, ...) #4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main(i32 noundef %0, ptr noundef %1) #0 !dbg !475 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca i32, align 4
  %7 = alloca %struct.SHA_INFO, align 4
  store i32 0, ptr %3, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !480, metadata !DIExpression()), !dbg !481
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !482, metadata !DIExpression()), !dbg !483
  call void @llvm.dbg.declare(metadata ptr %6, metadata !484, metadata !DIExpression()), !dbg !485
  call void @llvm.dbg.declare(metadata ptr %7, metadata !486, metadata !DIExpression()), !dbg !487
  br label %8, !dbg !488

8:                                                ; preds = %27, %2
  %9 = load i32, ptr %4, align 4, !dbg !489
  %10 = add nsw i32 %9, -1, !dbg !489
  store i32 %10, ptr %4, align 4, !dbg !489
  %11 = icmp ne i32 %10, 0, !dbg !488
  br i1 %11, label %12, label %28, !dbg !488

12:                                               ; preds = %8
  %13 = load ptr, ptr %5, align 8, !dbg !490
  %14 = getelementptr inbounds ptr, ptr %13, i32 1, !dbg !490
  store ptr %14, ptr %5, align 8, !dbg !490
  %15 = load ptr, ptr %14, align 8, !dbg !492
  %16 = call i32 (ptr, i32, ...) @open(ptr noundef %15, i32 noundef 0), !dbg !493
  store i32 %16, ptr %6, align 4, !dbg !494
  %17 = load i32, ptr %6, align 4, !dbg !495
  %18 = icmp eq i32 %17, 0, !dbg !497
  br i1 %18, label %19, label %23, !dbg !498

19:                                               ; preds = %12
  %20 = load ptr, ptr %5, align 8, !dbg !499
  %21 = load ptr, ptr %20, align 8, !dbg !501
  %22 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %21), !dbg !502
  br label %27, !dbg !503

23:                                               ; preds = %12
  %24 = call i32 @sha_stream(ptr noundef %7, ptr noundef %6), !dbg !504
  call void @sha_print(ptr noundef %7), !dbg !506
  %25 = load i32, ptr %6, align 4, !dbg !507
  %26 = call i32 @close(i32 noundef %25), !dbg !508
  br label %27

27:                                               ; preds = %23, %19
  br label %8, !dbg !488, !llvm.loop !509

28:                                               ; preds = %8
  ret i32 0, !dbg !511
}

declare i32 @open(ptr noundef, i32 noundef, ...) #4

declare i32 @close(i32 noundef) #4

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }
attributes #3 = { nocallback nofree nounwind willreturn memory(argmem: write) }
attributes #4 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

!llvm.dbg.cu = !{!12}
!llvm.module.flags = !{!25, !26, !27, !28, !29, !30, !31}
!llvm.ident = !{!32}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(scope: null, file: !2, line: 219, type: !3, isLocal: true, isDefinition: true)
!2 = !DIFile(filename: "sha.c", directory: "/home/yxk/llvm2c-test/xiao/SHA-1", checksumkind: CSK_MD5, checksum: "6e724b3e2d123a6c693cfe3f13770d69")
!3 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 208, elements: !5)
!4 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!5 = !{!6}
!6 = !DISubrange(count: 26)
!7 = !DIGlobalVariableExpression(var: !8, expr: !DIExpression())
!8 = distinct !DIGlobalVariable(scope: null, file: !2, line: 234, type: !9, isLocal: true, isDefinition: true)
!9 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 240, elements: !10)
!10 = !{!11}
!11 = !DISubrange(count: 30)
!12 = distinct !DICompileUnit(language: DW_LANG_C11, file: !2, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !13, globals: !24, splitDebugInlining: false, nameTableKind: None)
!13 = !{!14, !20, !21}
!14 = !DIDerivedType(tag: DW_TAG_typedef, name: "LONG", file: !2, line: 9, baseType: !15)
!15 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint32_t", file: !16, line: 26, baseType: !17)
!16 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h", directory: "", checksumkind: CSK_MD5, checksum: "2bf2ae53c58c01b1a1b9383b5195125c")
!17 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint32_t", file: !18, line: 42, baseType: !19)
!18 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!19 = !DIBasicType(name: "unsigned int", size: 32, encoding: DW_ATE_unsigned)
!20 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!21 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !22, size: 64)
!22 = !DIDerivedType(tag: DW_TAG_typedef, name: "BYTE", file: !2, line: 8, baseType: !23)
!23 = !DIBasicType(name: "unsigned char", size: 8, encoding: DW_ATE_unsigned_char)
!24 = !{!0, !7}
!25 = !{i32 7, !"Dwarf Version", i32 5}
!26 = !{i32 2, !"Debug Info Version", i32 3}
!27 = !{i32 1, !"wchar_size", i32 4}
!28 = !{i32 8, !"PIC Level", i32 2}
!29 = !{i32 7, !"PIE Level", i32 2}
!30 = !{i32 7, !"uwtable", i32 2}
!31 = !{i32 7, !"frame-pointer", i32 2}
!32 = !{!"Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)"}
!33 = distinct !DISubprogram(name: "sha_init", scope: !2, file: !2, line: 137, type: !34, scopeLine: 138, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !12, retainedNodes: !50)
!34 = !DISubroutineType(types: !35)
!35 = !{null, !36}
!36 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !37, size: 64)
!37 = !DIDerivedType(tag: DW_TAG_typedef, name: "SHA_INFO", file: !2, line: 18, baseType: !38)
!38 = distinct !DICompositeType(tag: DW_TAG_structure_type, file: !2, line: 14, size: 736, elements: !39)
!39 = !{!40, !44, !45, !46}
!40 = !DIDerivedType(tag: DW_TAG_member, name: "digest", scope: !38, file: !2, line: 15, baseType: !41, size: 160)
!41 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 160, elements: !42)
!42 = !{!43}
!43 = !DISubrange(count: 5)
!44 = !DIDerivedType(tag: DW_TAG_member, name: "count_lo", scope: !38, file: !2, line: 16, baseType: !14, size: 32, offset: 160)
!45 = !DIDerivedType(tag: DW_TAG_member, name: "count_hi", scope: !38, file: !2, line: 16, baseType: !14, size: 32, offset: 192)
!46 = !DIDerivedType(tag: DW_TAG_member, name: "data", scope: !38, file: !2, line: 17, baseType: !47, size: 512, offset: 224)
!47 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 512, elements: !48)
!48 = !{!49}
!49 = !DISubrange(count: 16)
!50 = !{}
!51 = !DILocalVariable(name: "sha_info", arg: 1, scope: !33, file: !2, line: 137, type: !36)
!52 = !DILocation(line: 137, column: 25, scope: !33)
!53 = !DILocation(line: 139, column: 5, scope: !33)
!54 = !DILocation(line: 139, column: 15, scope: !33)
!55 = !DILocation(line: 139, column: 25, scope: !33)
!56 = !DILocation(line: 140, column: 5, scope: !33)
!57 = !DILocation(line: 140, column: 15, scope: !33)
!58 = !DILocation(line: 140, column: 25, scope: !33)
!59 = !DILocation(line: 141, column: 5, scope: !33)
!60 = !DILocation(line: 141, column: 15, scope: !33)
!61 = !DILocation(line: 141, column: 25, scope: !33)
!62 = !DILocation(line: 142, column: 5, scope: !33)
!63 = !DILocation(line: 142, column: 15, scope: !33)
!64 = !DILocation(line: 142, column: 25, scope: !33)
!65 = !DILocation(line: 143, column: 5, scope: !33)
!66 = !DILocation(line: 143, column: 15, scope: !33)
!67 = !DILocation(line: 143, column: 25, scope: !33)
!68 = !DILocation(line: 144, column: 5, scope: !33)
!69 = !DILocation(line: 144, column: 15, scope: !33)
!70 = !DILocation(line: 144, column: 24, scope: !33)
!71 = !DILocation(line: 145, column: 5, scope: !33)
!72 = !DILocation(line: 145, column: 15, scope: !33)
!73 = !DILocation(line: 145, column: 24, scope: !33)
!74 = !DILocation(line: 146, column: 1, scope: !33)
!75 = distinct !DISubprogram(name: "sha_update", scope: !2, file: !2, line: 150, type: !76, scopeLine: 151, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !12, retainedNodes: !50)
!76 = !DISubroutineType(types: !77)
!77 = !{null, !36, !21, !20}
!78 = !DILocalVariable(name: "sha_info", arg: 1, scope: !75, file: !2, line: 150, type: !36)
!79 = !DILocation(line: 150, column: 27, scope: !75)
!80 = !DILocalVariable(name: "buffer", arg: 2, scope: !75, file: !2, line: 150, type: !21)
!81 = !DILocation(line: 150, column: 43, scope: !75)
!82 = !DILocalVariable(name: "count", arg: 3, scope: !75, file: !2, line: 150, type: !20)
!83 = !DILocation(line: 150, column: 55, scope: !75)
!84 = !DILocation(line: 152, column: 10, scope: !85)
!85 = distinct !DILexicalBlock(scope: !75, file: !2, line: 152, column: 9)
!86 = !DILocation(line: 152, column: 20, scope: !85)
!87 = !DILocation(line: 152, column: 39, scope: !85)
!88 = !DILocation(line: 152, column: 45, scope: !85)
!89 = !DILocation(line: 152, column: 29, scope: !85)
!90 = !DILocation(line: 152, column: 54, scope: !85)
!91 = !DILocation(line: 152, column: 64, scope: !85)
!92 = !DILocation(line: 152, column: 52, scope: !85)
!93 = !DILocation(line: 152, column: 9, scope: !75)
!94 = !DILocation(line: 153, column: 4, scope: !95)
!95 = distinct !DILexicalBlock(scope: !85, file: !2, line: 152, column: 74)
!96 = !DILocation(line: 153, column: 14, scope: !95)
!97 = !DILocation(line: 153, column: 2, scope: !95)
!98 = !DILocation(line: 154, column: 5, scope: !95)
!99 = !DILocation(line: 155, column: 34, scope: !75)
!100 = !DILocation(line: 155, column: 40, scope: !75)
!101 = !DILocation(line: 155, column: 5, scope: !75)
!102 = !DILocation(line: 155, column: 15, scope: !75)
!103 = !DILocation(line: 155, column: 24, scope: !75)
!104 = !DILocation(line: 156, column: 34, scope: !75)
!105 = !DILocation(line: 156, column: 40, scope: !75)
!106 = !DILocation(line: 156, column: 5, scope: !75)
!107 = !DILocation(line: 156, column: 15, scope: !75)
!108 = !DILocation(line: 156, column: 24, scope: !75)
!109 = !DILocation(line: 157, column: 5, scope: !75)
!110 = !DILocation(line: 157, column: 12, scope: !75)
!111 = !DILocation(line: 157, column: 18, scope: !75)
!112 = !DILocation(line: 158, column: 9, scope: !113)
!113 = distinct !DILexicalBlock(scope: !75, file: !2, line: 157, column: 36)
!114 = !DILocation(line: 158, column: 19, scope: !113)
!115 = !DILocation(line: 158, column: 2, scope: !113)
!116 = !DILocation(line: 158, column: 25, scope: !113)
!117 = !DILocation(line: 160, column: 15, scope: !113)
!118 = !DILocation(line: 160, column: 25, scope: !113)
!119 = !DILocation(line: 160, column: 2, scope: !113)
!120 = !DILocation(line: 162, column: 16, scope: !113)
!121 = !DILocation(line: 162, column: 2, scope: !113)
!122 = !DILocation(line: 163, column: 9, scope: !113)
!123 = !DILocation(line: 164, column: 8, scope: !113)
!124 = distinct !{!124, !109, !125, !126}
!125 = !DILocation(line: 165, column: 5, scope: !75)
!126 = !{!"llvm.loop.mustprogress"}
!127 = !DILocation(line: 166, column: 12, scope: !75)
!128 = !DILocation(line: 166, column: 22, scope: !75)
!129 = !DILocation(line: 166, column: 5, scope: !75)
!130 = !DILocation(line: 166, column: 28, scope: !75)
!131 = !DILocation(line: 166, column: 36, scope: !75)
!132 = !DILocation(line: 167, column: 1, scope: !75)
!133 = distinct !DISubprogram(name: "byte_reverse", scope: !2, file: !2, line: 113, type: !134, scopeLine: 114, flags: DIFlagPrototyped, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition, unit: !12, retainedNodes: !50)
!134 = !DISubroutineType(types: !135)
!135 = !{null, !136, !20}
!136 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !14, size: 64)
!137 = !DILocalVariable(name: "buffer", arg: 1, scope: !133, file: !2, line: 113, type: !136)
!138 = !DILocation(line: 113, column: 32, scope: !133)
!139 = !DILocalVariable(name: "count", arg: 2, scope: !133, file: !2, line: 113, type: !20)
!140 = !DILocation(line: 113, column: 44, scope: !133)
!141 = !DILocalVariable(name: "i", scope: !133, file: !2, line: 115, type: !20)
!142 = !DILocation(line: 115, column: 9, scope: !133)
!143 = !DILocalVariable(name: "ct", scope: !133, file: !2, line: 116, type: !144)
!144 = !DICompositeType(tag: DW_TAG_array_type, baseType: !22, size: 32, elements: !145)
!145 = !{!146}
!146 = !DISubrange(count: 4)
!147 = !DILocation(line: 116, column: 10, scope: !133)
!148 = !DILocalVariable(name: "cp", scope: !133, file: !2, line: 116, type: !21)
!149 = !DILocation(line: 116, column: 18, scope: !133)
!150 = !DILocation(line: 118, column: 11, scope: !133)
!151 = !DILocation(line: 119, column: 19, scope: !133)
!152 = !DILocation(line: 119, column: 8, scope: !133)
!153 = !DILocation(line: 120, column: 12, scope: !154)
!154 = distinct !DILexicalBlock(scope: !133, file: !2, line: 120, column: 5)
!155 = !DILocation(line: 120, column: 10, scope: !154)
!156 = !DILocation(line: 120, column: 17, scope: !157)
!157 = distinct !DILexicalBlock(scope: !154, file: !2, line: 120, column: 5)
!158 = !DILocation(line: 120, column: 21, scope: !157)
!159 = !DILocation(line: 120, column: 19, scope: !157)
!160 = !DILocation(line: 120, column: 5, scope: !154)
!161 = !DILocation(line: 121, column: 10, scope: !162)
!162 = distinct !DILexicalBlock(scope: !157, file: !2, line: 120, column: 33)
!163 = !DILocation(line: 121, column: 2, scope: !162)
!164 = !DILocation(line: 121, column: 8, scope: !162)
!165 = !DILocation(line: 122, column: 10, scope: !162)
!166 = !DILocation(line: 122, column: 2, scope: !162)
!167 = !DILocation(line: 122, column: 8, scope: !162)
!168 = !DILocation(line: 123, column: 10, scope: !162)
!169 = !DILocation(line: 123, column: 2, scope: !162)
!170 = !DILocation(line: 123, column: 8, scope: !162)
!171 = !DILocation(line: 124, column: 10, scope: !162)
!172 = !DILocation(line: 124, column: 2, scope: !162)
!173 = !DILocation(line: 124, column: 8, scope: !162)
!174 = !DILocation(line: 125, column: 10, scope: !162)
!175 = !DILocation(line: 125, column: 2, scope: !162)
!176 = !DILocation(line: 125, column: 8, scope: !162)
!177 = !DILocation(line: 126, column: 10, scope: !162)
!178 = !DILocation(line: 126, column: 2, scope: !162)
!179 = !DILocation(line: 126, column: 8, scope: !162)
!180 = !DILocation(line: 127, column: 10, scope: !162)
!181 = !DILocation(line: 127, column: 2, scope: !162)
!182 = !DILocation(line: 127, column: 8, scope: !162)
!183 = !DILocation(line: 128, column: 10, scope: !162)
!184 = !DILocation(line: 128, column: 2, scope: !162)
!185 = !DILocation(line: 128, column: 8, scope: !162)
!186 = !DILocation(line: 129, column: 5, scope: !162)
!187 = !DILocation(line: 130, column: 5, scope: !162)
!188 = !DILocation(line: 120, column: 28, scope: !157)
!189 = !DILocation(line: 120, column: 5, scope: !157)
!190 = distinct !{!190, !160, !191, !126}
!191 = !DILocation(line: 130, column: 5, scope: !154)
!192 = !DILocation(line: 131, column: 1, scope: !133)
!193 = distinct !DISubprogram(name: "sha_transform", scope: !2, file: !2, line: 49, type: !34, scopeLine: 50, flags: DIFlagPrototyped, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition, unit: !12, retainedNodes: !50)
!194 = !DILocalVariable(name: "sha_info", arg: 1, scope: !193, file: !2, line: 49, type: !36)
!195 = !DILocation(line: 49, column: 37, scope: !193)
!196 = !DILocalVariable(name: "i", scope: !193, file: !2, line: 51, type: !20)
!197 = !DILocation(line: 51, column: 9, scope: !193)
!198 = !DILocalVariable(name: "temp", scope: !193, file: !2, line: 52, type: !14)
!199 = !DILocation(line: 52, column: 10, scope: !193)
!200 = !DILocalVariable(name: "A", scope: !193, file: !2, line: 52, type: !14)
!201 = !DILocation(line: 52, column: 16, scope: !193)
!202 = !DILocalVariable(name: "B", scope: !193, file: !2, line: 52, type: !14)
!203 = !DILocation(line: 52, column: 19, scope: !193)
!204 = !DILocalVariable(name: "C", scope: !193, file: !2, line: 52, type: !14)
!205 = !DILocation(line: 52, column: 22, scope: !193)
!206 = !DILocalVariable(name: "D", scope: !193, file: !2, line: 52, type: !14)
!207 = !DILocation(line: 52, column: 25, scope: !193)
!208 = !DILocalVariable(name: "E", scope: !193, file: !2, line: 52, type: !14)
!209 = !DILocation(line: 52, column: 28, scope: !193)
!210 = !DILocalVariable(name: "W", scope: !193, file: !2, line: 52, type: !211)
!211 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 2560, elements: !212)
!212 = !{!213}
!213 = !DISubrange(count: 80)
!214 = !DILocation(line: 52, column: 31, scope: !193)
!215 = !DILocation(line: 54, column: 12, scope: !216)
!216 = distinct !DILexicalBlock(scope: !193, file: !2, line: 54, column: 5)
!217 = !DILocation(line: 54, column: 10, scope: !216)
!218 = !DILocation(line: 54, column: 17, scope: !219)
!219 = distinct !DILexicalBlock(scope: !216, file: !2, line: 54, column: 5)
!220 = !DILocation(line: 54, column: 19, scope: !219)
!221 = !DILocation(line: 54, column: 5, scope: !216)
!222 = !DILocation(line: 55, column: 9, scope: !223)
!223 = distinct !DILexicalBlock(scope: !219, file: !2, line: 54, column: 30)
!224 = !DILocation(line: 55, column: 19, scope: !223)
!225 = !DILocation(line: 55, column: 24, scope: !223)
!226 = !DILocation(line: 55, column: 4, scope: !223)
!227 = !DILocation(line: 55, column: 2, scope: !223)
!228 = !DILocation(line: 55, column: 7, scope: !223)
!229 = !DILocation(line: 56, column: 5, scope: !223)
!230 = !DILocation(line: 54, column: 25, scope: !219)
!231 = !DILocation(line: 54, column: 5, scope: !219)
!232 = distinct !{!232, !221, !233, !126}
!233 = !DILocation(line: 56, column: 5, scope: !216)
!234 = !DILocation(line: 57, column: 12, scope: !235)
!235 = distinct !DILexicalBlock(scope: !193, file: !2, line: 57, column: 5)
!236 = !DILocation(line: 57, column: 10, scope: !235)
!237 = !DILocation(line: 57, column: 18, scope: !238)
!238 = distinct !DILexicalBlock(scope: !235, file: !2, line: 57, column: 5)
!239 = !DILocation(line: 57, column: 20, scope: !238)
!240 = !DILocation(line: 57, column: 5, scope: !235)
!241 = !DILocation(line: 58, column: 11, scope: !242)
!242 = distinct !DILexicalBlock(scope: !238, file: !2, line: 57, column: 31)
!243 = !DILocation(line: 58, column: 12, scope: !242)
!244 = !DILocation(line: 58, column: 9, scope: !242)
!245 = !DILocation(line: 58, column: 20, scope: !242)
!246 = !DILocation(line: 58, column: 21, scope: !242)
!247 = !DILocation(line: 58, column: 18, scope: !242)
!248 = !DILocation(line: 58, column: 16, scope: !242)
!249 = !DILocation(line: 58, column: 29, scope: !242)
!250 = !DILocation(line: 58, column: 30, scope: !242)
!251 = !DILocation(line: 58, column: 27, scope: !242)
!252 = !DILocation(line: 58, column: 25, scope: !242)
!253 = !DILocation(line: 58, column: 39, scope: !242)
!254 = !DILocation(line: 58, column: 40, scope: !242)
!255 = !DILocation(line: 58, column: 37, scope: !242)
!256 = !DILocation(line: 58, column: 35, scope: !242)
!257 = !DILocation(line: 58, column: 4, scope: !242)
!258 = !DILocation(line: 58, column: 2, scope: !242)
!259 = !DILocation(line: 58, column: 7, scope: !242)
!260 = !DILocation(line: 62, column: 5, scope: !242)
!261 = !DILocation(line: 57, column: 26, scope: !238)
!262 = !DILocation(line: 57, column: 5, scope: !238)
!263 = distinct !{!263, !240, !264, !126}
!264 = !DILocation(line: 62, column: 5, scope: !235)
!265 = !DILocation(line: 63, column: 9, scope: !193)
!266 = !DILocation(line: 63, column: 19, scope: !193)
!267 = !DILocation(line: 63, column: 7, scope: !193)
!268 = !DILocation(line: 64, column: 9, scope: !193)
!269 = !DILocation(line: 64, column: 19, scope: !193)
!270 = !DILocation(line: 64, column: 7, scope: !193)
!271 = !DILocation(line: 65, column: 9, scope: !193)
!272 = !DILocation(line: 65, column: 19, scope: !193)
!273 = !DILocation(line: 65, column: 7, scope: !193)
!274 = !DILocation(line: 66, column: 9, scope: !193)
!275 = !DILocation(line: 66, column: 19, scope: !193)
!276 = !DILocation(line: 66, column: 7, scope: !193)
!277 = !DILocation(line: 67, column: 9, scope: !193)
!278 = !DILocation(line: 67, column: 19, scope: !193)
!279 = !DILocation(line: 67, column: 7, scope: !193)
!280 = !DILocation(line: 89, column: 12, scope: !281)
!281 = distinct !DILexicalBlock(scope: !193, file: !2, line: 89, column: 5)
!282 = !DILocation(line: 89, column: 10, scope: !281)
!283 = !DILocation(line: 89, column: 17, scope: !284)
!284 = distinct !DILexicalBlock(scope: !281, file: !2, line: 89, column: 5)
!285 = !DILocation(line: 89, column: 19, scope: !284)
!286 = !DILocation(line: 89, column: 5, scope: !281)
!287 = !DILocation(line: 90, column: 2, scope: !288)
!288 = distinct !DILexicalBlock(scope: !284, file: !2, line: 89, column: 30)
!289 = !DILocation(line: 91, column: 5, scope: !288)
!290 = !DILocation(line: 89, column: 25, scope: !284)
!291 = !DILocation(line: 89, column: 5, scope: !284)
!292 = distinct !{!292, !286, !293, !126}
!293 = !DILocation(line: 91, column: 5, scope: !281)
!294 = !DILocation(line: 92, column: 12, scope: !295)
!295 = distinct !DILexicalBlock(scope: !193, file: !2, line: 92, column: 5)
!296 = !DILocation(line: 92, column: 10, scope: !295)
!297 = !DILocation(line: 92, column: 18, scope: !298)
!298 = distinct !DILexicalBlock(scope: !295, file: !2, line: 92, column: 5)
!299 = !DILocation(line: 92, column: 20, scope: !298)
!300 = !DILocation(line: 92, column: 5, scope: !295)
!301 = !DILocation(line: 93, column: 2, scope: !302)
!302 = distinct !DILexicalBlock(scope: !298, file: !2, line: 92, column: 31)
!303 = !DILocation(line: 94, column: 5, scope: !302)
!304 = !DILocation(line: 92, column: 26, scope: !298)
!305 = !DILocation(line: 92, column: 5, scope: !298)
!306 = distinct !{!306, !300, !307, !126}
!307 = !DILocation(line: 94, column: 5, scope: !295)
!308 = !DILocation(line: 95, column: 12, scope: !309)
!309 = distinct !DILexicalBlock(scope: !193, file: !2, line: 95, column: 5)
!310 = !DILocation(line: 95, column: 10, scope: !309)
!311 = !DILocation(line: 95, column: 18, scope: !312)
!312 = distinct !DILexicalBlock(scope: !309, file: !2, line: 95, column: 5)
!313 = !DILocation(line: 95, column: 20, scope: !312)
!314 = !DILocation(line: 95, column: 5, scope: !309)
!315 = !DILocation(line: 96, column: 2, scope: !316)
!316 = distinct !DILexicalBlock(scope: !312, file: !2, line: 95, column: 31)
!317 = !DILocation(line: 97, column: 5, scope: !316)
!318 = !DILocation(line: 95, column: 26, scope: !312)
!319 = !DILocation(line: 95, column: 5, scope: !312)
!320 = distinct !{!320, !314, !321, !126}
!321 = !DILocation(line: 97, column: 5, scope: !309)
!322 = !DILocation(line: 98, column: 12, scope: !323)
!323 = distinct !DILexicalBlock(scope: !193, file: !2, line: 98, column: 5)
!324 = !DILocation(line: 98, column: 10, scope: !323)
!325 = !DILocation(line: 98, column: 18, scope: !326)
!326 = distinct !DILexicalBlock(scope: !323, file: !2, line: 98, column: 5)
!327 = !DILocation(line: 98, column: 20, scope: !326)
!328 = !DILocation(line: 98, column: 5, scope: !323)
!329 = !DILocation(line: 99, column: 2, scope: !330)
!330 = distinct !DILexicalBlock(scope: !326, file: !2, line: 98, column: 31)
!331 = !DILocation(line: 100, column: 5, scope: !330)
!332 = !DILocation(line: 98, column: 26, scope: !326)
!333 = !DILocation(line: 98, column: 5, scope: !326)
!334 = distinct !{!334, !328, !335, !126}
!335 = !DILocation(line: 100, column: 5, scope: !323)
!336 = !DILocation(line: 102, column: 28, scope: !193)
!337 = !DILocation(line: 102, column: 5, scope: !193)
!338 = !DILocation(line: 102, column: 15, scope: !193)
!339 = !DILocation(line: 102, column: 25, scope: !193)
!340 = !DILocation(line: 103, column: 28, scope: !193)
!341 = !DILocation(line: 103, column: 5, scope: !193)
!342 = !DILocation(line: 103, column: 15, scope: !193)
!343 = !DILocation(line: 103, column: 25, scope: !193)
!344 = !DILocation(line: 104, column: 28, scope: !193)
!345 = !DILocation(line: 104, column: 5, scope: !193)
!346 = !DILocation(line: 104, column: 15, scope: !193)
!347 = !DILocation(line: 104, column: 25, scope: !193)
!348 = !DILocation(line: 105, column: 28, scope: !193)
!349 = !DILocation(line: 105, column: 5, scope: !193)
!350 = !DILocation(line: 105, column: 15, scope: !193)
!351 = !DILocation(line: 105, column: 25, scope: !193)
!352 = !DILocation(line: 106, column: 28, scope: !193)
!353 = !DILocation(line: 106, column: 5, scope: !193)
!354 = !DILocation(line: 106, column: 15, scope: !193)
!355 = !DILocation(line: 106, column: 25, scope: !193)
!356 = !DILocation(line: 107, column: 1, scope: !193)
!357 = distinct !DISubprogram(name: "sha_final", scope: !2, file: !2, line: 171, type: !34, scopeLine: 172, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !12, retainedNodes: !50)
!358 = !DILocalVariable(name: "sha_info", arg: 1, scope: !357, file: !2, line: 171, type: !36)
!359 = !DILocation(line: 171, column: 26, scope: !357)
!360 = !DILocalVariable(name: "count", scope: !357, file: !2, line: 173, type: !20)
!361 = !DILocation(line: 173, column: 9, scope: !357)
!362 = !DILocalVariable(name: "lo_bit_count", scope: !357, file: !2, line: 174, type: !14)
!363 = !DILocation(line: 174, column: 10, scope: !357)
!364 = !DILocalVariable(name: "hi_bit_count", scope: !357, file: !2, line: 174, type: !14)
!365 = !DILocation(line: 174, column: 24, scope: !357)
!366 = !DILocation(line: 176, column: 20, scope: !357)
!367 = !DILocation(line: 176, column: 30, scope: !357)
!368 = !DILocation(line: 176, column: 18, scope: !357)
!369 = !DILocation(line: 177, column: 20, scope: !357)
!370 = !DILocation(line: 177, column: 30, scope: !357)
!371 = !DILocation(line: 177, column: 18, scope: !357)
!372 = !DILocation(line: 178, column: 21, scope: !357)
!373 = !DILocation(line: 178, column: 34, scope: !357)
!374 = !DILocation(line: 178, column: 40, scope: !357)
!375 = !DILocation(line: 178, column: 11, scope: !357)
!376 = !DILocation(line: 179, column: 15, scope: !357)
!377 = !DILocation(line: 179, column: 25, scope: !357)
!378 = !DILocation(line: 179, column: 5, scope: !357)
!379 = !DILocation(line: 179, column: 36, scope: !357)
!380 = !DILocation(line: 179, column: 40, scope: !357)
!381 = !DILocation(line: 180, column: 9, scope: !382)
!382 = distinct !DILexicalBlock(scope: !357, file: !2, line: 180, column: 9)
!383 = !DILocation(line: 180, column: 15, scope: !382)
!384 = !DILocation(line: 180, column: 9, scope: !357)
!385 = !DILocation(line: 181, column: 19, scope: !386)
!386 = distinct !DILexicalBlock(scope: !382, file: !2, line: 180, column: 21)
!387 = !DILocation(line: 181, column: 29, scope: !386)
!388 = !DILocation(line: 181, column: 36, scope: !386)
!389 = !DILocation(line: 181, column: 34, scope: !386)
!390 = !DILocation(line: 181, column: 51, scope: !386)
!391 = !DILocation(line: 181, column: 49, scope: !386)
!392 = !DILocation(line: 181, column: 46, scope: !386)
!393 = !DILocation(line: 181, column: 2, scope: !386)
!394 = !DILocation(line: 183, column: 15, scope: !386)
!395 = !DILocation(line: 183, column: 25, scope: !386)
!396 = !DILocation(line: 183, column: 2, scope: !386)
!397 = !DILocation(line: 185, column: 16, scope: !386)
!398 = !DILocation(line: 185, column: 2, scope: !386)
!399 = !DILocation(line: 186, column: 10, scope: !386)
!400 = !DILocation(line: 186, column: 20, scope: !386)
!401 = !DILocation(line: 186, column: 2, scope: !386)
!402 = !DILocation(line: 187, column: 5, scope: !386)
!403 = !DILocation(line: 188, column: 19, scope: !404)
!404 = distinct !DILexicalBlock(scope: !382, file: !2, line: 187, column: 12)
!405 = !DILocation(line: 188, column: 29, scope: !404)
!406 = !DILocation(line: 188, column: 36, scope: !404)
!407 = !DILocation(line: 188, column: 34, scope: !404)
!408 = !DILocation(line: 188, column: 51, scope: !404)
!409 = !DILocation(line: 188, column: 49, scope: !404)
!410 = !DILocation(line: 188, column: 46, scope: !404)
!411 = !DILocation(line: 188, column: 2, scope: !404)
!412 = !DILocation(line: 191, column: 18, scope: !357)
!413 = !DILocation(line: 191, column: 28, scope: !357)
!414 = !DILocation(line: 191, column: 5, scope: !357)
!415 = !DILocation(line: 193, column: 26, scope: !357)
!416 = !DILocation(line: 193, column: 5, scope: !357)
!417 = !DILocation(line: 193, column: 15, scope: !357)
!418 = !DILocation(line: 193, column: 24, scope: !357)
!419 = !DILocation(line: 194, column: 26, scope: !357)
!420 = !DILocation(line: 194, column: 5, scope: !357)
!421 = !DILocation(line: 194, column: 15, scope: !357)
!422 = !DILocation(line: 194, column: 24, scope: !357)
!423 = !DILocation(line: 195, column: 19, scope: !357)
!424 = !DILocation(line: 195, column: 5, scope: !357)
!425 = !DILocation(line: 196, column: 1, scope: !357)
!426 = distinct !DISubprogram(name: "sha_stream", scope: !2, file: !2, line: 202, type: !427, scopeLine: 203, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !12, retainedNodes: !50)
!427 = !DISubroutineType(types: !428)
!428 = !{!20, !36, !429}
!429 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !20, size: 64)
!430 = !DILocalVariable(name: "sha_info", arg: 1, scope: !426, file: !2, line: 202, type: !36)
!431 = !DILocation(line: 202, column: 26, scope: !426)
!432 = !DILocalVariable(name: "fin", arg: 2, scope: !426, file: !2, line: 202, type: !429)
!433 = !DILocation(line: 202, column: 41, scope: !426)
!434 = !DILocalVariable(name: "i", scope: !426, file: !2, line: 204, type: !20)
!435 = !DILocation(line: 204, column: 9, scope: !426)
!436 = !DILocalVariable(name: "data", scope: !426, file: !2, line: 205, type: !437)
!437 = !DICompositeType(tag: DW_TAG_array_type, baseType: !22, size: 65536, elements: !438)
!438 = !{!439}
!439 = !DISubrange(count: 8192)
!440 = !DILocation(line: 205, column: 10, scope: !426)
!441 = !DILocation(line: 207, column: 14, scope: !426)
!442 = !DILocation(line: 207, column: 5, scope: !426)
!443 = !DILocation(line: 208, column: 5, scope: !426)
!444 = !DILocation(line: 208, column: 23, scope: !426)
!445 = !DILocation(line: 208, column: 22, scope: !426)
!446 = !DILocation(line: 208, column: 28, scope: !426)
!447 = !DILocation(line: 208, column: 17, scope: !426)
!448 = !DILocation(line: 208, column: 15, scope: !426)
!449 = !DILocation(line: 208, column: 47, scope: !426)
!450 = !DILocation(line: 209, column: 13, scope: !451)
!451 = distinct !DILexicalBlock(scope: !426, file: !2, line: 208, column: 52)
!452 = !DILocation(line: 209, column: 23, scope: !451)
!453 = !DILocation(line: 209, column: 29, scope: !451)
!454 = !DILocation(line: 209, column: 2, scope: !451)
!455 = distinct !{!455, !443, !456, !126}
!456 = !DILocation(line: 210, column: 5, scope: !426)
!457 = !DILocation(line: 211, column: 15, scope: !426)
!458 = !DILocation(line: 211, column: 5, scope: !426)
!459 = !DILocation(line: 212, column: 5, scope: !426)
!460 = distinct !DISubprogram(name: "sha_print", scope: !2, file: !2, line: 217, type: !34, scopeLine: 218, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !12, retainedNodes: !50)
!461 = !DILocalVariable(name: "sha_info", arg: 1, scope: !460, file: !2, line: 217, type: !36)
!462 = !DILocation(line: 217, column: 26, scope: !460)
!463 = !DILocation(line: 221, column: 2, scope: !460)
!464 = !DILocation(line: 221, column: 12, scope: !460)
!465 = !DILocation(line: 221, column: 23, scope: !460)
!466 = !DILocation(line: 221, column: 33, scope: !460)
!467 = !DILocation(line: 221, column: 44, scope: !460)
!468 = !DILocation(line: 221, column: 54, scope: !460)
!469 = !DILocation(line: 222, column: 2, scope: !460)
!470 = !DILocation(line: 222, column: 12, scope: !460)
!471 = !DILocation(line: 222, column: 23, scope: !460)
!472 = !DILocation(line: 222, column: 33, scope: !460)
!473 = !DILocation(line: 219, column: 5, scope: !460)
!474 = !DILocation(line: 223, column: 1, scope: !460)
!475 = distinct !DISubprogram(name: "main", scope: !2, file: !2, line: 225, type: !476, scopeLine: 226, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !12, retainedNodes: !50)
!476 = !DISubroutineType(types: !477)
!477 = !{!20, !20, !478}
!478 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !479, size: 64)
!479 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !4, size: 64)
!480 = !DILocalVariable(name: "argc", arg: 1, scope: !475, file: !2, line: 225, type: !20)
!481 = !DILocation(line: 225, column: 14, scope: !475)
!482 = !DILocalVariable(name: "argv", arg: 2, scope: !475, file: !2, line: 225, type: !478)
!483 = !DILocation(line: 225, column: 27, scope: !475)
!484 = !DILocalVariable(name: "fin", scope: !475, file: !2, line: 227, type: !20)
!485 = !DILocation(line: 227, column: 9, scope: !475)
!486 = !DILocalVariable(name: "sha_info", scope: !475, file: !2, line: 228, type: !37)
!487 = !DILocation(line: 228, column: 14, scope: !475)
!488 = !DILocation(line: 231, column: 2, scope: !475)
!489 = !DILocation(line: 231, column: 9, scope: !475)
!490 = !DILocation(line: 232, column: 19, scope: !491)
!491 = distinct !DILexicalBlock(scope: !475, file: !2, line: 231, column: 17)
!492 = !DILocation(line: 232, column: 17, scope: !491)
!493 = !DILocation(line: 232, column: 12, scope: !491)
!494 = !DILocation(line: 232, column: 10, scope: !491)
!495 = !DILocation(line: 233, column: 10, scope: !496)
!496 = distinct !DILexicalBlock(scope: !491, file: !2, line: 233, column: 10)
!497 = !DILocation(line: 233, column: 14, scope: !496)
!498 = !DILocation(line: 233, column: 10, scope: !491)
!499 = !DILocation(line: 234, column: 45, scope: !500)
!500 = distinct !DILexicalBlock(scope: !496, file: !2, line: 233, column: 20)
!501 = !DILocation(line: 234, column: 44, scope: !500)
!502 = !DILocation(line: 234, column: 3, scope: !500)
!503 = !DILocation(line: 235, column: 6, scope: !500)
!504 = !DILocation(line: 236, column: 3, scope: !505)
!505 = distinct !DILexicalBlock(scope: !496, file: !2, line: 235, column: 13)
!506 = !DILocation(line: 237, column: 3, scope: !505)
!507 = !DILocation(line: 238, column: 9, scope: !505)
!508 = !DILocation(line: 238, column: 3, scope: !505)
!509 = distinct !{!509, !488, !510, !126}
!510 = !DILocation(line: 240, column: 2, scope: !475)
!511 = !DILocation(line: 242, column: 5, scope: !475)
