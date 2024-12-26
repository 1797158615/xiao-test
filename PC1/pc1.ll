; ModuleID = 'pc1.c'
source_filename = "pc1.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@cle = dso_local global [32 x i8] zeroinitializer, align 16, !dbg !0
@x1a0 = dso_local global [16 x i16] zeroinitializer, align 16, !dbg !46
@res = dso_local global i16 0, align 2, !dbg !51
@inter = dso_local global i16 0, align 2, !dbg !55
@i = dso_local global i16 0, align 2, !dbg !53
@x1a2 = dso_local global i16 0, align 2, !dbg !44
@dx = dso_local global i16 0, align 2, !dbg !38
@ax = dso_local global i16 0, align 2, !dbg !31
@cx = dso_local global i16 0, align 2, !dbg !36
@bx = dso_local global i16 0, align 2, !dbg !34
@tmp = dso_local global i16 0, align 2, !dbg !42
@si = dso_local global i16 0, align 2, !dbg !40
@.str = private unnamed_addr constant [33 x i8] c"abcdefghijklmnopqrstuvwxyz012345\00", align 1, !dbg !5
@buff = dso_local global [32 x i8] zeroinitializer, align 16, !dbg !63
@count = dso_local global i32 0, align 4, !dbg !75
@c1 = dso_local global i32 0, align 4, !dbg !72
@c = dso_local global i16 0, align 2, !dbg !69
@cfc = dso_local global i16 0, align 2, !dbg !57
@cfd = dso_local global i16 0, align 2, !dbg !59
@compte = dso_local global i16 0, align 2, !dbg !61
@d = dso_local global i16 0, align 2, !dbg !77
@e = dso_local global i16 0, align 2, !dbg !79
@.str.1 = private unnamed_addr constant [10 x i8] c"argc < 1\0A\00", align 1, !dbg !11
@.str.2 = private unnamed_addr constant [53 x i8] c"PC1 Cipher 256 bits \0AENCRYPT file IN.BIN to OUT.BIN\0A\00", align 1, !dbg !16
@.str.3 = private unnamed_addr constant [7 x i8] c"%d %d \00", align 1, !dbg !21
@.str.4 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1, !dbg !26
@in = dso_local global ptr null, align 8, !dbg !81

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @assemble() #0 !dbg !151 {
  %1 = load i8, ptr @cle, align 16, !dbg !154
  %2 = zext i8 %1 to i32, !dbg !154
  %3 = mul nsw i32 %2, 256, !dbg !155
  %4 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 1), align 1, !dbg !156
  %5 = zext i8 %4 to i32, !dbg !156
  %6 = add nsw i32 %3, %5, !dbg !157
  %7 = trunc i32 %6 to i16, !dbg !158
  store i16 %7, ptr @x1a0, align 16, !dbg !159
  %8 = call i32 @code(), !dbg !160
  %9 = load i16, ptr @res, align 2, !dbg !161
  store i16 %9, ptr @inter, align 2, !dbg !162
  %10 = load i16, ptr @x1a0, align 16, !dbg !163
  %11 = zext i16 %10 to i32, !dbg !163
  %12 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 2), align 2, !dbg !164
  %13 = zext i8 %12 to i32, !dbg !164
  %14 = mul nsw i32 %13, 256, !dbg !165
  %15 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 3), align 1, !dbg !166
  %16 = zext i8 %15 to i32, !dbg !166
  %17 = add nsw i32 %14, %16, !dbg !167
  %18 = xor i32 %11, %17, !dbg !168
  %19 = trunc i32 %18 to i16, !dbg !163
  store i16 %19, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 1), align 2, !dbg !169
  %20 = call i32 @code(), !dbg !170
  %21 = load i16, ptr @inter, align 2, !dbg !171
  %22 = zext i16 %21 to i32, !dbg !171
  %23 = load i16, ptr @res, align 2, !dbg !172
  %24 = zext i16 %23 to i32, !dbg !172
  %25 = xor i32 %22, %24, !dbg !173
  %26 = trunc i32 %25 to i16, !dbg !171
  store i16 %26, ptr @inter, align 2, !dbg !174
  %27 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 1), align 2, !dbg !175
  %28 = zext i16 %27 to i32, !dbg !175
  %29 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 4), align 4, !dbg !176
  %30 = zext i8 %29 to i32, !dbg !176
  %31 = mul nsw i32 %30, 256, !dbg !177
  %32 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 5), align 1, !dbg !178
  %33 = zext i8 %32 to i32, !dbg !178
  %34 = add nsw i32 %31, %33, !dbg !179
  %35 = xor i32 %28, %34, !dbg !180
  %36 = trunc i32 %35 to i16, !dbg !175
  store i16 %36, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 2), align 4, !dbg !181
  %37 = call i32 @code(), !dbg !182
  %38 = load i16, ptr @inter, align 2, !dbg !183
  %39 = zext i16 %38 to i32, !dbg !183
  %40 = load i16, ptr @res, align 2, !dbg !184
  %41 = zext i16 %40 to i32, !dbg !184
  %42 = xor i32 %39, %41, !dbg !185
  %43 = trunc i32 %42 to i16, !dbg !183
  store i16 %43, ptr @inter, align 2, !dbg !186
  %44 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 2), align 4, !dbg !187
  %45 = zext i16 %44 to i32, !dbg !187
  %46 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 6), align 2, !dbg !188
  %47 = zext i8 %46 to i32, !dbg !188
  %48 = mul nsw i32 %47, 256, !dbg !189
  %49 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 7), align 1, !dbg !190
  %50 = zext i8 %49 to i32, !dbg !190
  %51 = add nsw i32 %48, %50, !dbg !191
  %52 = xor i32 %45, %51, !dbg !192
  %53 = trunc i32 %52 to i16, !dbg !187
  store i16 %53, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 3), align 2, !dbg !193
  %54 = call i32 @code(), !dbg !194
  %55 = load i16, ptr @inter, align 2, !dbg !195
  %56 = zext i16 %55 to i32, !dbg !195
  %57 = load i16, ptr @res, align 2, !dbg !196
  %58 = zext i16 %57 to i32, !dbg !196
  %59 = xor i32 %56, %58, !dbg !197
  %60 = trunc i32 %59 to i16, !dbg !195
  store i16 %60, ptr @inter, align 2, !dbg !198
  %61 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 3), align 2, !dbg !199
  %62 = zext i16 %61 to i32, !dbg !199
  %63 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 8), align 8, !dbg !200
  %64 = zext i8 %63 to i32, !dbg !200
  %65 = mul nsw i32 %64, 256, !dbg !201
  %66 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 9), align 1, !dbg !202
  %67 = zext i8 %66 to i32, !dbg !202
  %68 = add nsw i32 %65, %67, !dbg !203
  %69 = xor i32 %62, %68, !dbg !204
  %70 = trunc i32 %69 to i16, !dbg !199
  store i16 %70, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 4), align 8, !dbg !205
  %71 = call i32 @code(), !dbg !206
  %72 = load i16, ptr @inter, align 2, !dbg !207
  %73 = zext i16 %72 to i32, !dbg !207
  %74 = load i16, ptr @res, align 2, !dbg !208
  %75 = zext i16 %74 to i32, !dbg !208
  %76 = xor i32 %73, %75, !dbg !209
  %77 = trunc i32 %76 to i16, !dbg !207
  store i16 %77, ptr @inter, align 2, !dbg !210
  %78 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 4), align 8, !dbg !211
  %79 = zext i16 %78 to i32, !dbg !211
  %80 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 10), align 2, !dbg !212
  %81 = zext i8 %80 to i32, !dbg !212
  %82 = mul nsw i32 %81, 256, !dbg !213
  %83 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 11), align 1, !dbg !214
  %84 = zext i8 %83 to i32, !dbg !214
  %85 = add nsw i32 %82, %84, !dbg !215
  %86 = xor i32 %79, %85, !dbg !216
  %87 = trunc i32 %86 to i16, !dbg !211
  store i16 %87, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 5), align 2, !dbg !217
  %88 = call i32 @code(), !dbg !218
  %89 = load i16, ptr @inter, align 2, !dbg !219
  %90 = zext i16 %89 to i32, !dbg !219
  %91 = load i16, ptr @res, align 2, !dbg !220
  %92 = zext i16 %91 to i32, !dbg !220
  %93 = xor i32 %90, %92, !dbg !221
  %94 = trunc i32 %93 to i16, !dbg !219
  store i16 %94, ptr @inter, align 2, !dbg !222
  %95 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 5), align 2, !dbg !223
  %96 = zext i16 %95 to i32, !dbg !223
  %97 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 12), align 4, !dbg !224
  %98 = zext i8 %97 to i32, !dbg !224
  %99 = mul nsw i32 %98, 256, !dbg !225
  %100 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 13), align 1, !dbg !226
  %101 = zext i8 %100 to i32, !dbg !226
  %102 = add nsw i32 %99, %101, !dbg !227
  %103 = xor i32 %96, %102, !dbg !228
  %104 = trunc i32 %103 to i16, !dbg !223
  store i16 %104, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 6), align 4, !dbg !229
  %105 = call i32 @code(), !dbg !230
  %106 = load i16, ptr @inter, align 2, !dbg !231
  %107 = zext i16 %106 to i32, !dbg !231
  %108 = load i16, ptr @res, align 2, !dbg !232
  %109 = zext i16 %108 to i32, !dbg !232
  %110 = xor i32 %107, %109, !dbg !233
  %111 = trunc i32 %110 to i16, !dbg !231
  store i16 %111, ptr @inter, align 2, !dbg !234
  %112 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 6), align 4, !dbg !235
  %113 = zext i16 %112 to i32, !dbg !235
  %114 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 14), align 2, !dbg !236
  %115 = zext i8 %114 to i32, !dbg !236
  %116 = mul nsw i32 %115, 256, !dbg !237
  %117 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 15), align 1, !dbg !238
  %118 = zext i8 %117 to i32, !dbg !238
  %119 = add nsw i32 %116, %118, !dbg !239
  %120 = xor i32 %113, %119, !dbg !240
  %121 = trunc i32 %120 to i16, !dbg !235
  store i16 %121, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 7), align 2, !dbg !241
  %122 = call i32 @code(), !dbg !242
  %123 = load i16, ptr @inter, align 2, !dbg !243
  %124 = zext i16 %123 to i32, !dbg !243
  %125 = load i16, ptr @res, align 2, !dbg !244
  %126 = zext i16 %125 to i32, !dbg !244
  %127 = xor i32 %124, %126, !dbg !245
  %128 = trunc i32 %127 to i16, !dbg !243
  store i16 %128, ptr @inter, align 2, !dbg !246
  %129 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 7), align 2, !dbg !247
  %130 = zext i16 %129 to i32, !dbg !247
  %131 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 16), align 16, !dbg !248
  %132 = zext i8 %131 to i32, !dbg !248
  %133 = mul nsw i32 %132, 256, !dbg !249
  %134 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 17), align 1, !dbg !250
  %135 = zext i8 %134 to i32, !dbg !250
  %136 = add nsw i32 %133, %135, !dbg !251
  %137 = xor i32 %130, %136, !dbg !252
  %138 = trunc i32 %137 to i16, !dbg !247
  store i16 %138, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 8), align 16, !dbg !253
  %139 = call i32 @code(), !dbg !254
  %140 = load i16, ptr @inter, align 2, !dbg !255
  %141 = zext i16 %140 to i32, !dbg !255
  %142 = load i16, ptr @res, align 2, !dbg !256
  %143 = zext i16 %142 to i32, !dbg !256
  %144 = xor i32 %141, %143, !dbg !257
  %145 = trunc i32 %144 to i16, !dbg !255
  store i16 %145, ptr @inter, align 2, !dbg !258
  %146 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 8), align 16, !dbg !259
  %147 = zext i16 %146 to i32, !dbg !259
  %148 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 18), align 2, !dbg !260
  %149 = zext i8 %148 to i32, !dbg !260
  %150 = mul nsw i32 %149, 256, !dbg !261
  %151 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 19), align 1, !dbg !262
  %152 = zext i8 %151 to i32, !dbg !262
  %153 = add nsw i32 %150, %152, !dbg !263
  %154 = xor i32 %147, %153, !dbg !264
  %155 = trunc i32 %154 to i16, !dbg !259
  store i16 %155, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 9), align 2, !dbg !265
  %156 = call i32 @code(), !dbg !266
  %157 = load i16, ptr @inter, align 2, !dbg !267
  %158 = zext i16 %157 to i32, !dbg !267
  %159 = load i16, ptr @res, align 2, !dbg !268
  %160 = zext i16 %159 to i32, !dbg !268
  %161 = xor i32 %158, %160, !dbg !269
  %162 = trunc i32 %161 to i16, !dbg !267
  store i16 %162, ptr @inter, align 2, !dbg !270
  %163 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 9), align 2, !dbg !271
  %164 = zext i16 %163 to i32, !dbg !271
  %165 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 20), align 4, !dbg !272
  %166 = zext i8 %165 to i32, !dbg !272
  %167 = mul nsw i32 %166, 256, !dbg !273
  %168 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 21), align 1, !dbg !274
  %169 = zext i8 %168 to i32, !dbg !274
  %170 = add nsw i32 %167, %169, !dbg !275
  %171 = xor i32 %164, %170, !dbg !276
  %172 = trunc i32 %171 to i16, !dbg !271
  store i16 %172, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 10), align 4, !dbg !277
  %173 = call i32 @code(), !dbg !278
  %174 = load i16, ptr @inter, align 2, !dbg !279
  %175 = zext i16 %174 to i32, !dbg !279
  %176 = load i16, ptr @res, align 2, !dbg !280
  %177 = zext i16 %176 to i32, !dbg !280
  %178 = xor i32 %175, %177, !dbg !281
  %179 = trunc i32 %178 to i16, !dbg !279
  store i16 %179, ptr @inter, align 2, !dbg !282
  %180 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 10), align 4, !dbg !283
  %181 = zext i16 %180 to i32, !dbg !283
  %182 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 22), align 2, !dbg !284
  %183 = zext i8 %182 to i32, !dbg !284
  %184 = mul nsw i32 %183, 256, !dbg !285
  %185 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 23), align 1, !dbg !286
  %186 = zext i8 %185 to i32, !dbg !286
  %187 = add nsw i32 %184, %186, !dbg !287
  %188 = xor i32 %181, %187, !dbg !288
  %189 = trunc i32 %188 to i16, !dbg !283
  store i16 %189, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 11), align 2, !dbg !289
  %190 = call i32 @code(), !dbg !290
  %191 = load i16, ptr @inter, align 2, !dbg !291
  %192 = zext i16 %191 to i32, !dbg !291
  %193 = load i16, ptr @res, align 2, !dbg !292
  %194 = zext i16 %193 to i32, !dbg !292
  %195 = xor i32 %192, %194, !dbg !293
  %196 = trunc i32 %195 to i16, !dbg !291
  store i16 %196, ptr @inter, align 2, !dbg !294
  %197 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 11), align 2, !dbg !295
  %198 = zext i16 %197 to i32, !dbg !295
  %199 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 24), align 8, !dbg !296
  %200 = zext i8 %199 to i32, !dbg !296
  %201 = mul nsw i32 %200, 256, !dbg !297
  %202 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 25), align 1, !dbg !298
  %203 = zext i8 %202 to i32, !dbg !298
  %204 = add nsw i32 %201, %203, !dbg !299
  %205 = xor i32 %198, %204, !dbg !300
  %206 = trunc i32 %205 to i16, !dbg !295
  store i16 %206, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 12), align 8, !dbg !301
  %207 = call i32 @code(), !dbg !302
  %208 = load i16, ptr @inter, align 2, !dbg !303
  %209 = zext i16 %208 to i32, !dbg !303
  %210 = load i16, ptr @res, align 2, !dbg !304
  %211 = zext i16 %210 to i32, !dbg !304
  %212 = xor i32 %209, %211, !dbg !305
  %213 = trunc i32 %212 to i16, !dbg !303
  store i16 %213, ptr @inter, align 2, !dbg !306
  %214 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 12), align 8, !dbg !307
  %215 = zext i16 %214 to i32, !dbg !307
  %216 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 26), align 2, !dbg !308
  %217 = zext i8 %216 to i32, !dbg !308
  %218 = mul nsw i32 %217, 256, !dbg !309
  %219 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 27), align 1, !dbg !310
  %220 = zext i8 %219 to i32, !dbg !310
  %221 = add nsw i32 %218, %220, !dbg !311
  %222 = xor i32 %215, %221, !dbg !312
  %223 = trunc i32 %222 to i16, !dbg !307
  store i16 %223, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 13), align 2, !dbg !313
  %224 = call i32 @code(), !dbg !314
  %225 = load i16, ptr @inter, align 2, !dbg !315
  %226 = zext i16 %225 to i32, !dbg !315
  %227 = load i16, ptr @res, align 2, !dbg !316
  %228 = zext i16 %227 to i32, !dbg !316
  %229 = xor i32 %226, %228, !dbg !317
  %230 = trunc i32 %229 to i16, !dbg !315
  store i16 %230, ptr @inter, align 2, !dbg !318
  %231 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 13), align 2, !dbg !319
  %232 = zext i16 %231 to i32, !dbg !319
  %233 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 28), align 4, !dbg !320
  %234 = zext i8 %233 to i32, !dbg !320
  %235 = mul nsw i32 %234, 256, !dbg !321
  %236 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 29), align 1, !dbg !322
  %237 = zext i8 %236 to i32, !dbg !322
  %238 = add nsw i32 %235, %237, !dbg !323
  %239 = xor i32 %232, %238, !dbg !324
  %240 = trunc i32 %239 to i16, !dbg !319
  store i16 %240, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 14), align 4, !dbg !325
  %241 = call i32 @code(), !dbg !326
  %242 = load i16, ptr @inter, align 2, !dbg !327
  %243 = zext i16 %242 to i32, !dbg !327
  %244 = load i16, ptr @res, align 2, !dbg !328
  %245 = zext i16 %244 to i32, !dbg !328
  %246 = xor i32 %243, %245, !dbg !329
  %247 = trunc i32 %246 to i16, !dbg !327
  store i16 %247, ptr @inter, align 2, !dbg !330
  %248 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 14), align 4, !dbg !331
  %249 = zext i16 %248 to i32, !dbg !331
  %250 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 30), align 2, !dbg !332
  %251 = zext i8 %250 to i32, !dbg !332
  %252 = mul nsw i32 %251, 256, !dbg !333
  %253 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 31), align 1, !dbg !334
  %254 = zext i8 %253 to i32, !dbg !334
  %255 = add nsw i32 %252, %254, !dbg !335
  %256 = xor i32 %249, %255, !dbg !336
  %257 = trunc i32 %256 to i16, !dbg !331
  store i16 %257, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 15), align 2, !dbg !337
  %258 = call i32 @code(), !dbg !338
  %259 = load i16, ptr @inter, align 2, !dbg !339
  %260 = zext i16 %259 to i32, !dbg !339
  %261 = load i16, ptr @res, align 2, !dbg !340
  %262 = zext i16 %261 to i32, !dbg !340
  %263 = xor i32 %260, %262, !dbg !341
  %264 = trunc i32 %263 to i16, !dbg !339
  store i16 %264, ptr @inter, align 2, !dbg !342
  store i16 0, ptr @i, align 2, !dbg !343
  ret i32 0, !dbg !344
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @code() #0 !dbg !345 {
  %1 = load i16, ptr @x1a2, align 2, !dbg !346
  %2 = zext i16 %1 to i32, !dbg !346
  %3 = load i16, ptr @i, align 2, !dbg !347
  %4 = zext i16 %3 to i32, !dbg !347
  %5 = add nsw i32 %2, %4, !dbg !348
  %6 = trunc i32 %5 to i16, !dbg !346
  store i16 %6, ptr @dx, align 2, !dbg !349
  %7 = load i16, ptr @i, align 2, !dbg !350
  %8 = zext i16 %7 to i64, !dbg !351
  %9 = getelementptr inbounds [16 x i16], ptr @x1a0, i64 0, i64 %8, !dbg !351
  %10 = load i16, ptr %9, align 2, !dbg !351
  store i16 %10, ptr @ax, align 2, !dbg !352
  store i16 346, ptr @cx, align 2, !dbg !353
  store i16 20021, ptr @bx, align 2, !dbg !354
  %11 = load i16, ptr @ax, align 2, !dbg !355
  store i16 %11, ptr @tmp, align 2, !dbg !356
  %12 = load i16, ptr @si, align 2, !dbg !357
  store i16 %12, ptr @ax, align 2, !dbg !358
  %13 = load i16, ptr @tmp, align 2, !dbg !359
  store i16 %13, ptr @si, align 2, !dbg !360
  %14 = load i16, ptr @ax, align 2, !dbg !361
  store i16 %14, ptr @tmp, align 2, !dbg !362
  %15 = load i16, ptr @dx, align 2, !dbg !363
  store i16 %15, ptr @ax, align 2, !dbg !364
  %16 = load i16, ptr @tmp, align 2, !dbg !365
  store i16 %16, ptr @dx, align 2, !dbg !366
  %17 = load i16, ptr @ax, align 2, !dbg !367
  %18 = zext i16 %17 to i32, !dbg !367
  %19 = icmp ne i32 %18, 0, !dbg !369
  br i1 %19, label %20, label %27, !dbg !370

20:                                               ; preds = %0
  %21 = load i16, ptr @ax, align 2, !dbg !371
  %22 = zext i16 %21 to i32, !dbg !371
  %23 = load i16, ptr @bx, align 2, !dbg !373
  %24 = zext i16 %23 to i32, !dbg !373
  %25 = mul nsw i32 %22, %24, !dbg !374
  %26 = trunc i32 %25 to i16, !dbg !371
  store i16 %26, ptr @ax, align 2, !dbg !375
  br label %27, !dbg !376

27:                                               ; preds = %20, %0
  %28 = load i16, ptr @ax, align 2, !dbg !377
  store i16 %28, ptr @tmp, align 2, !dbg !378
  %29 = load i16, ptr @cx, align 2, !dbg !379
  store i16 %29, ptr @ax, align 2, !dbg !380
  %30 = load i16, ptr @tmp, align 2, !dbg !381
  store i16 %30, ptr @cx, align 2, !dbg !382
  %31 = load i16, ptr @ax, align 2, !dbg !383
  %32 = zext i16 %31 to i32, !dbg !383
  %33 = icmp ne i32 %32, 0, !dbg !385
  br i1 %33, label %34, label %47, !dbg !386

34:                                               ; preds = %27
  %35 = load i16, ptr @ax, align 2, !dbg !387
  %36 = zext i16 %35 to i32, !dbg !387
  %37 = load i16, ptr @si, align 2, !dbg !389
  %38 = zext i16 %37 to i32, !dbg !389
  %39 = mul nsw i32 %36, %38, !dbg !390
  %40 = trunc i32 %39 to i16, !dbg !387
  store i16 %40, ptr @ax, align 2, !dbg !391
  %41 = load i16, ptr @ax, align 2, !dbg !392
  %42 = zext i16 %41 to i32, !dbg !392
  %43 = load i16, ptr @cx, align 2, !dbg !393
  %44 = zext i16 %43 to i32, !dbg !393
  %45 = add nsw i32 %42, %44, !dbg !394
  %46 = trunc i32 %45 to i16, !dbg !392
  store i16 %46, ptr @cx, align 2, !dbg !395
  br label %47, !dbg !396

47:                                               ; preds = %34, %27
  %48 = load i16, ptr @ax, align 2, !dbg !397
  store i16 %48, ptr @tmp, align 2, !dbg !398
  %49 = load i16, ptr @si, align 2, !dbg !399
  store i16 %49, ptr @ax, align 2, !dbg !400
  %50 = load i16, ptr @tmp, align 2, !dbg !401
  store i16 %50, ptr @si, align 2, !dbg !402
  %51 = load i16, ptr @ax, align 2, !dbg !403
  %52 = zext i16 %51 to i32, !dbg !403
  %53 = load i16, ptr @bx, align 2, !dbg !404
  %54 = zext i16 %53 to i32, !dbg !404
  %55 = mul nsw i32 %52, %54, !dbg !405
  %56 = trunc i32 %55 to i16, !dbg !403
  store i16 %56, ptr @ax, align 2, !dbg !406
  %57 = load i16, ptr @cx, align 2, !dbg !407
  %58 = zext i16 %57 to i32, !dbg !407
  %59 = load i16, ptr @dx, align 2, !dbg !408
  %60 = zext i16 %59 to i32, !dbg !408
  %61 = add nsw i32 %58, %60, !dbg !409
  %62 = trunc i32 %61 to i16, !dbg !407
  store i16 %62, ptr @dx, align 2, !dbg !410
  %63 = load i16, ptr @ax, align 2, !dbg !411
  %64 = zext i16 %63 to i32, !dbg !411
  %65 = add nsw i32 %64, 1, !dbg !412
  %66 = trunc i32 %65 to i16, !dbg !411
  store i16 %66, ptr @ax, align 2, !dbg !413
  %67 = load i16, ptr @dx, align 2, !dbg !414
  store i16 %67, ptr @x1a2, align 2, !dbg !415
  %68 = load i16, ptr @ax, align 2, !dbg !416
  %69 = load i16, ptr @i, align 2, !dbg !417
  %70 = zext i16 %69 to i64, !dbg !418
  %71 = getelementptr inbounds [16 x i16], ptr @x1a0, i64 0, i64 %70, !dbg !418
  store i16 %68, ptr %71, align 2, !dbg !419
  %72 = load i16, ptr @ax, align 2, !dbg !420
  %73 = zext i16 %72 to i32, !dbg !420
  %74 = load i16, ptr @dx, align 2, !dbg !421
  %75 = zext i16 %74 to i32, !dbg !421
  %76 = xor i32 %73, %75, !dbg !422
  %77 = trunc i32 %76 to i16, !dbg !420
  store i16 %77, ptr @res, align 2, !dbg !423
  %78 = load i16, ptr @i, align 2, !dbg !424
  %79 = zext i16 %78 to i32, !dbg !424
  %80 = add nsw i32 %79, 1, !dbg !425
  %81 = trunc i32 %80 to i16, !dbg !424
  store i16 %81, ptr @i, align 2, !dbg !426
  ret i32 0, !dbg !427
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @my_rand_r(ptr noundef %0) #0 !dbg !428 {
  %2 = alloca ptr, align 8
  %3 = alloca i32, align 4
  store ptr %0, ptr %2, align 8
  call void @llvm.dbg.declare(metadata ptr %2, metadata !433, metadata !DIExpression()), !dbg !434
  call void @llvm.dbg.declare(metadata ptr %3, metadata !435, metadata !DIExpression()), !dbg !437
  %4 = load ptr, ptr %2, align 8, !dbg !438
  %5 = load i32, ptr %4, align 4, !dbg !439
  %6 = mul nsw i32 %5, 1664525, !dbg !440
  %7 = add nsw i32 %6, 1013904223, !dbg !441
  store i32 %7, ptr %3, align 4, !dbg !437
  %8 = load i32, ptr %3, align 4, !dbg !442
  %9 = load ptr, ptr %2, align 8, !dbg !443
  store i32 %8, ptr %9, align 4, !dbg !444
  %10 = load i32, ptr %3, align 4, !dbg !445
  %11 = lshr i32 %10, 16, !dbg !446
  %12 = and i32 %11, 32767, !dbg !447
  ret i32 %12, !dbg !448
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @pc1_drive(ptr noundef %0, ptr noundef %1) #0 !dbg !449 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store ptr %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !452, metadata !DIExpression()), !dbg !453
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !454, metadata !DIExpression()), !dbg !455
  call void @llvm.dbg.declare(metadata ptr %5, metadata !456, metadata !DIExpression()), !dbg !457
  store i32 20000, ptr %5, align 4, !dbg !457
  call void @llvm.dbg.declare(metadata ptr %6, metadata !458, metadata !DIExpression()), !dbg !459
  call void @llvm.dbg.declare(metadata ptr %7, metadata !460, metadata !DIExpression()), !dbg !461
  store i32 1, ptr %7, align 4, !dbg !461
  call void @llvm.dbg.declare(metadata ptr %8, metadata !462, metadata !DIExpression()), !dbg !463
  store i32 0, ptr %8, align 4, !dbg !463
  store i16 0, ptr @si, align 2, !dbg !464
  store i16 0, ptr @x1a2, align 2, !dbg !465
  store i16 0, ptr @i, align 2, !dbg !466
  call void @llvm.memcpy.p0.p0.i64(ptr align 16 @cle, ptr align 1 @.str, i64 32, i1 false), !dbg !467
  store i8 0, ptr getelementptr inbounds ([32 x i8], ptr @buff, i64 0, i64 1), align 1, !dbg !468
  %9 = call i64 @strlen(ptr noundef @buff) #5, !dbg !469
  %10 = icmp ugt i64 %9, 32, !dbg !471
  br i1 %10, label %11, label %12, !dbg !472

11:                                               ; preds = %2
  store i32 32, ptr @count, align 4, !dbg !473
  br label %15, !dbg !475

12:                                               ; preds = %2
  %13 = call i64 @strlen(ptr noundef @buff) #5, !dbg !476
  %14 = trunc i64 %13 to i32, !dbg !476
  store i32 %14, ptr @count, align 4, !dbg !478
  br label %15

15:                                               ; preds = %12, %11
  store i32 0, ptr @c1, align 4, !dbg !479
  br label %16, !dbg !481

16:                                               ; preds = %28, %15
  %17 = load i32, ptr @c1, align 4, !dbg !482
  %18 = load i32, ptr @count, align 4, !dbg !484
  %19 = icmp slt i32 %17, %18, !dbg !485
  br i1 %19, label %20, label %31, !dbg !486

20:                                               ; preds = %16
  %21 = load i32, ptr @c1, align 4, !dbg !487
  %22 = sext i32 %21 to i64, !dbg !489
  %23 = getelementptr inbounds [32 x i8], ptr @buff, i64 0, i64 %22, !dbg !489
  %24 = load i8, ptr %23, align 1, !dbg !489
  %25 = load i32, ptr @c1, align 4, !dbg !490
  %26 = sext i32 %25 to i64, !dbg !491
  %27 = getelementptr inbounds [32 x i8], ptr @cle, i64 0, i64 %26, !dbg !491
  store i8 %24, ptr %27, align 1, !dbg !492
  br label %28, !dbg !493

28:                                               ; preds = %20
  %29 = load i32, ptr @c1, align 4, !dbg !494
  %30 = add nsw i32 %29, 1, !dbg !494
  store i32 %30, ptr @c1, align 4, !dbg !494
  br label %16, !dbg !495, !llvm.loop !496

31:                                               ; preds = %16
  store i32 0, ptr %6, align 4, !dbg !499
  br label %32, !dbg !500

32:                                               ; preds = %105, %31
  %33 = load i32, ptr %5, align 4, !dbg !501
  %34 = add nsw i32 %33, -1, !dbg !501
  store i32 %34, ptr %5, align 4, !dbg !501
  %35 = icmp ne i32 %34, 0, !dbg !500
  br i1 %35, label %36, label %106, !dbg !500

36:                                               ; preds = %32
  %37 = call i32 @my_rand_r(ptr noundef %7), !dbg !502
  %38 = trunc i32 %37 to i16, !dbg !502
  store i16 %38, ptr @c, align 2, !dbg !504
  %39 = call i32 @assemble(), !dbg !505
  %40 = load i16, ptr @inter, align 2, !dbg !506
  %41 = zext i16 %40 to i32, !dbg !506
  %42 = ashr i32 %41, 8, !dbg !507
  %43 = trunc i32 %42 to i16, !dbg !506
  store i16 %43, ptr @cfc, align 2, !dbg !508
  %44 = load i16, ptr @inter, align 2, !dbg !509
  %45 = zext i16 %44 to i32, !dbg !509
  %46 = and i32 %45, 255, !dbg !510
  %47 = trunc i32 %46 to i16, !dbg !509
  store i16 %47, ptr @cfd, align 2, !dbg !511
  store i16 0, ptr @compte, align 2, !dbg !512
  br label %48, !dbg !514

48:                                               ; preds = %65, %36
  %49 = load i16, ptr @compte, align 2, !dbg !515
  %50 = zext i16 %49 to i32, !dbg !515
  %51 = icmp sle i32 %50, 31, !dbg !517
  br i1 %51, label %52, label %68, !dbg !518

52:                                               ; preds = %48
  %53 = load i16, ptr @compte, align 2, !dbg !519
  %54 = zext i16 %53 to i64, !dbg !521
  %55 = getelementptr inbounds [32 x i8], ptr @cle, i64 0, i64 %54, !dbg !521
  %56 = load i8, ptr %55, align 1, !dbg !521
  %57 = zext i8 %56 to i32, !dbg !521
  %58 = load i16, ptr @c, align 2, !dbg !522
  %59 = sext i16 %58 to i32, !dbg !522
  %60 = xor i32 %57, %59, !dbg !523
  %61 = trunc i32 %60 to i8, !dbg !521
  %62 = load i16, ptr @compte, align 2, !dbg !524
  %63 = zext i16 %62 to i64, !dbg !525
  %64 = getelementptr inbounds [32 x i8], ptr @cle, i64 0, i64 %63, !dbg !525
  store i8 %61, ptr %64, align 1, !dbg !526
  br label %65, !dbg !527

65:                                               ; preds = %52
  %66 = load i16, ptr @compte, align 2, !dbg !528
  %67 = add i16 %66, 1, !dbg !528
  store i16 %67, ptr @compte, align 2, !dbg !528
  br label %48, !dbg !529, !llvm.loop !530

68:                                               ; preds = %48
  %69 = load i16, ptr @c, align 2, !dbg !532
  %70 = sext i16 %69 to i32, !dbg !532
  %71 = load i16, ptr @cfc, align 2, !dbg !533
  %72 = zext i16 %71 to i32, !dbg !533
  %73 = load i16, ptr @cfd, align 2, !dbg !534
  %74 = zext i16 %73 to i32, !dbg !534
  %75 = xor i32 %72, %74, !dbg !535
  %76 = xor i32 %70, %75, !dbg !536
  %77 = trunc i32 %76 to i16, !dbg !532
  store i16 %77, ptr @c, align 2, !dbg !537
  %78 = load i16, ptr @c, align 2, !dbg !538
  %79 = sext i16 %78 to i32, !dbg !538
  %80 = ashr i32 %79, 4, !dbg !539
  %81 = trunc i32 %80 to i16, !dbg !540
  store i16 %81, ptr @d, align 2, !dbg !541
  %82 = load i16, ptr @c, align 2, !dbg !542
  %83 = sext i16 %82 to i32, !dbg !542
  %84 = and i32 %83, 15, !dbg !543
  %85 = trunc i32 %84 to i16, !dbg !544
  store i16 %85, ptr @e, align 2, !dbg !545
  %86 = load i32, ptr %6, align 4, !dbg !546
  %87 = add nsw i32 %86, 1, !dbg !546
  store i32 %87, ptr %6, align 4, !dbg !546
  %88 = and i32 %87, 2047, !dbg !548
  %89 = icmp eq i32 %88, 0, !dbg !549
  br i1 %89, label %90, label %105, !dbg !550

90:                                               ; preds = %68
  %91 = load i16, ptr @d, align 2, !dbg !551
  %92 = sext i16 %91 to i32, !dbg !551
  %93 = load ptr, ptr %3, align 8, !dbg !553
  %94 = load i32, ptr %8, align 4, !dbg !554
  %95 = sext i32 %94 to i64, !dbg !553
  %96 = getelementptr inbounds i32, ptr %93, i64 %95, !dbg !553
  store i32 %92, ptr %96, align 4, !dbg !555
  %97 = load i16, ptr @e, align 2, !dbg !556
  %98 = sext i16 %97 to i32, !dbg !556
  %99 = load ptr, ptr %4, align 8, !dbg !557
  %100 = load i32, ptr %8, align 4, !dbg !558
  %101 = sext i32 %100 to i64, !dbg !557
  %102 = getelementptr inbounds i32, ptr %99, i64 %101, !dbg !557
  store i32 %98, ptr %102, align 4, !dbg !559
  %103 = load i32, ptr %8, align 4, !dbg !560
  %104 = add nsw i32 %103, 1, !dbg !560
  store i32 %104, ptr %8, align 4, !dbg !560
  br label %105, !dbg !561

105:                                              ; preds = %90, %68
  br label %32, !dbg !500, !llvm.loop !562

106:                                              ; preds = %32
  ret i32 0, !dbg !564
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

; Function Attrs: nounwind willreturn memory(read)
declare i64 @strlen(ptr noundef) #3

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main(i32 noundef %0, ptr noundef %1) #0 !dbg !565 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca [9 x i32], align 16
  %7 = alloca [9 x i32], align 16
  %8 = alloca i32, align 4
  store i32 0, ptr %3, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !571, metadata !DIExpression()), !dbg !572
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !573, metadata !DIExpression()), !dbg !574
  %9 = load i32, ptr %4, align 4, !dbg !575
  %10 = icmp sgt i32 %9, 1, !dbg !577
  br i1 %10, label %11, label %13, !dbg !578

11:                                               ; preds = %2
  %12 = call i32 (ptr, ...) @printf(ptr noundef @.str.1), !dbg !579
  br label %13, !dbg !579

13:                                               ; preds = %11, %2
  %14 = call i32 (ptr, ...) @printf(ptr noundef @.str.2), !dbg !580
  call void @llvm.dbg.declare(metadata ptr %6, metadata !581, metadata !DIExpression()), !dbg !585
  call void @llvm.dbg.declare(metadata ptr %7, metadata !586, metadata !DIExpression()), !dbg !587
  %15 = getelementptr inbounds [9 x i32], ptr %6, i64 0, i64 0, !dbg !588
  %16 = getelementptr inbounds [9 x i32], ptr %7, i64 0, i64 0, !dbg !589
  %17 = call i32 @pc1_drive(ptr noundef %15, ptr noundef %16), !dbg !590
  call void @llvm.dbg.declare(metadata ptr %8, metadata !591, metadata !DIExpression()), !dbg !593
  store i32 0, ptr %8, align 4, !dbg !593
  br label %18, !dbg !594

18:                                               ; preds = %31, %13
  %19 = load i32, ptr %8, align 4, !dbg !595
  %20 = icmp slt i32 %19, 9, !dbg !597
  br i1 %20, label %21, label %34, !dbg !598

21:                                               ; preds = %18
  %22 = load i32, ptr %8, align 4, !dbg !599
  %23 = sext i32 %22 to i64, !dbg !601
  %24 = getelementptr inbounds [9 x i32], ptr %6, i64 0, i64 %23, !dbg !601
  %25 = load i32, ptr %24, align 4, !dbg !601
  %26 = load i32, ptr %8, align 4, !dbg !602
  %27 = sext i32 %26 to i64, !dbg !603
  %28 = getelementptr inbounds [9 x i32], ptr %7, i64 0, i64 %27, !dbg !603
  %29 = load i32, ptr %28, align 4, !dbg !603
  %30 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %25, i32 noundef %29), !dbg !604
  br label %31, !dbg !605

31:                                               ; preds = %21
  %32 = load i32, ptr %8, align 4, !dbg !606
  %33 = add nsw i32 %32, 1, !dbg !606
  store i32 %33, ptr %8, align 4, !dbg !606
  br label %18, !dbg !607, !llvm.loop !608

34:                                               ; preds = %18
  %35 = call i32 (ptr, ...) @printf(ptr noundef @.str.4), !dbg !610
  ret i32 0, !dbg !611
}

declare i32 @printf(ptr noundef, ...) #4

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }
attributes #3 = { nounwind willreturn memory(read) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { nounwind willreturn memory(read) }

!llvm.dbg.cu = !{!2}
!llvm.module.flags = !{!143, !144, !145, !146, !147, !148, !149}
!llvm.ident = !{!150}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(name: "cle", scope: !2, file: !3, line: 7, type: !65, isLocal: false, isDefinition: true)
!2 = distinct !DICompileUnit(language: DW_LANG_C11, file: !3, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, globals: !4, splitDebugInlining: false, nameTableKind: None)
!3 = !DIFile(filename: "pc1.c", directory: "/home/yxk/llvm2c-test/xiao/PC1", checksumkind: CSK_MD5, checksum: "af099f58381a5ecfaf60f67349e702db")
!4 = !{!5, !11, !16, !21, !26, !31, !34, !36, !38, !40, !42, !44, !46, !51, !53, !55, !57, !59, !61, !0, !63, !69, !72, !75, !77, !79, !81}
!5 = !DIGlobalVariableExpression(var: !6, expr: !DIExpression())
!6 = distinct !DIGlobalVariable(scope: null, file: !3, line: 250, type: !7, isLocal: true, isDefinition: true)
!7 = !DICompositeType(tag: DW_TAG_array_type, baseType: !8, size: 264, elements: !9)
!8 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!9 = !{!10}
!10 = !DISubrange(count: 33)
!11 = !DIGlobalVariableExpression(var: !12, expr: !DIExpression())
!12 = distinct !DIGlobalVariable(scope: null, file: !3, line: 323, type: !13, isLocal: true, isDefinition: true)
!13 = !DICompositeType(tag: DW_TAG_array_type, baseType: !8, size: 80, elements: !14)
!14 = !{!15}
!15 = !DISubrange(count: 10)
!16 = !DIGlobalVariableExpression(var: !17, expr: !DIExpression())
!17 = distinct !DIGlobalVariable(scope: null, file: !3, line: 324, type: !18, isLocal: true, isDefinition: true)
!18 = !DICompositeType(tag: DW_TAG_array_type, baseType: !8, size: 424, elements: !19)
!19 = !{!20}
!20 = !DISubrange(count: 53)
!21 = !DIGlobalVariableExpression(var: !22, expr: !DIExpression())
!22 = distinct !DIGlobalVariable(scope: null, file: !3, line: 329, type: !23, isLocal: true, isDefinition: true)
!23 = !DICompositeType(tag: DW_TAG_array_type, baseType: !8, size: 56, elements: !24)
!24 = !{!25}
!25 = !DISubrange(count: 7)
!26 = !DIGlobalVariableExpression(var: !27, expr: !DIExpression())
!27 = distinct !DIGlobalVariable(scope: null, file: !3, line: 331, type: !28, isLocal: true, isDefinition: true)
!28 = !DICompositeType(tag: DW_TAG_array_type, baseType: !8, size: 16, elements: !29)
!29 = !{!30}
!30 = !DISubrange(count: 2)
!31 = !DIGlobalVariableExpression(var: !32, expr: !DIExpression())
!32 = distinct !DIGlobalVariable(name: "ax", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!33 = !DIBasicType(name: "unsigned short", size: 16, encoding: DW_ATE_unsigned)
!34 = !DIGlobalVariableExpression(var: !35, expr: !DIExpression())
!35 = distinct !DIGlobalVariable(name: "bx", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!36 = !DIGlobalVariableExpression(var: !37, expr: !DIExpression())
!37 = distinct !DIGlobalVariable(name: "cx", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!38 = !DIGlobalVariableExpression(var: !39, expr: !DIExpression())
!39 = distinct !DIGlobalVariable(name: "dx", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!40 = !DIGlobalVariableExpression(var: !41, expr: !DIExpression())
!41 = distinct !DIGlobalVariable(name: "si", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!42 = !DIGlobalVariableExpression(var: !43, expr: !DIExpression())
!43 = distinct !DIGlobalVariable(name: "tmp", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!44 = !DIGlobalVariableExpression(var: !45, expr: !DIExpression())
!45 = distinct !DIGlobalVariable(name: "x1a2", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!46 = !DIGlobalVariableExpression(var: !47, expr: !DIExpression())
!47 = distinct !DIGlobalVariable(name: "x1a0", scope: !2, file: !3, line: 4, type: !48, isLocal: false, isDefinition: true)
!48 = !DICompositeType(tag: DW_TAG_array_type, baseType: !33, size: 256, elements: !49)
!49 = !{!50}
!50 = !DISubrange(count: 16)
!51 = !DIGlobalVariableExpression(var: !52, expr: !DIExpression())
!52 = distinct !DIGlobalVariable(name: "res", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!53 = !DIGlobalVariableExpression(var: !54, expr: !DIExpression())
!54 = distinct !DIGlobalVariable(name: "i", scope: !2, file: !3, line: 4, type: !33, isLocal: false, isDefinition: true)
!55 = !DIGlobalVariableExpression(var: !56, expr: !DIExpression())
!56 = distinct !DIGlobalVariable(name: "inter", scope: !2, file: !3, line: 5, type: !33, isLocal: false, isDefinition: true)
!57 = !DIGlobalVariableExpression(var: !58, expr: !DIExpression())
!58 = distinct !DIGlobalVariable(name: "cfc", scope: !2, file: !3, line: 5, type: !33, isLocal: false, isDefinition: true)
!59 = !DIGlobalVariableExpression(var: !60, expr: !DIExpression())
!60 = distinct !DIGlobalVariable(name: "cfd", scope: !2, file: !3, line: 5, type: !33, isLocal: false, isDefinition: true)
!61 = !DIGlobalVariableExpression(var: !62, expr: !DIExpression())
!62 = distinct !DIGlobalVariable(name: "compte", scope: !2, file: !3, line: 5, type: !33, isLocal: false, isDefinition: true)
!63 = !DIGlobalVariableExpression(var: !64, expr: !DIExpression())
!64 = distinct !DIGlobalVariable(name: "buff", scope: !2, file: !3, line: 10, type: !65, isLocal: false, isDefinition: true)
!65 = !DICompositeType(tag: DW_TAG_array_type, baseType: !66, size: 256, elements: !67)
!66 = !DIBasicType(name: "unsigned char", size: 8, encoding: DW_ATE_unsigned_char)
!67 = !{!68}
!68 = !DISubrange(count: 32)
!69 = !DIGlobalVariableExpression(var: !70, expr: !DIExpression())
!70 = distinct !DIGlobalVariable(name: "c", scope: !2, file: !3, line: 12, type: !71, isLocal: false, isDefinition: true)
!71 = !DIBasicType(name: "short", size: 16, encoding: DW_ATE_signed)
!72 = !DIGlobalVariableExpression(var: !73, expr: !DIExpression())
!73 = distinct !DIGlobalVariable(name: "c1", scope: !2, file: !3, line: 14, type: !74, isLocal: false, isDefinition: true)
!74 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!75 = !DIGlobalVariableExpression(var: !76, expr: !DIExpression())
!76 = distinct !DIGlobalVariable(name: "count", scope: !2, file: !3, line: 14, type: !74, isLocal: false, isDefinition: true)
!77 = !DIGlobalVariableExpression(var: !78, expr: !DIExpression())
!78 = distinct !DIGlobalVariable(name: "d", scope: !2, file: !3, line: 16, type: !71, isLocal: false, isDefinition: true)
!79 = !DIGlobalVariableExpression(var: !80, expr: !DIExpression())
!80 = distinct !DIGlobalVariable(name: "e", scope: !2, file: !3, line: 16, type: !71, isLocal: false, isDefinition: true)
!81 = !DIGlobalVariableExpression(var: !82, expr: !DIExpression())
!82 = distinct !DIGlobalVariable(name: "in", scope: !2, file: !3, line: 18, type: !83, isLocal: false, isDefinition: true)
!83 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !84, size: 64)
!84 = !DIDerivedType(tag: DW_TAG_typedef, name: "FILE", file: !85, line: 7, baseType: !86)
!85 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/FILE.h", directory: "", checksumkind: CSK_MD5, checksum: "571f9fb6223c42439075fdde11a0de5d")
!86 = distinct !DICompositeType(tag: DW_TAG_structure_type, name: "_IO_FILE", file: !87, line: 49, size: 1728, elements: !88)
!87 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h", directory: "", checksumkind: CSK_MD5, checksum: "1bad07471b7974df4ecc1d1c2ca207e6")
!88 = !{!89, !90, !92, !93, !94, !95, !96, !97, !98, !99, !100, !101, !102, !105, !107, !108, !109, !113, !114, !116, !120, !123, !125, !128, !131, !132, !134, !138, !139}
!89 = !DIDerivedType(tag: DW_TAG_member, name: "_flags", scope: !86, file: !87, line: 51, baseType: !74, size: 32)
!90 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_read_ptr", scope: !86, file: !87, line: 54, baseType: !91, size: 64, offset: 64)
!91 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !8, size: 64)
!92 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_read_end", scope: !86, file: !87, line: 55, baseType: !91, size: 64, offset: 128)
!93 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_read_base", scope: !86, file: !87, line: 56, baseType: !91, size: 64, offset: 192)
!94 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_write_base", scope: !86, file: !87, line: 57, baseType: !91, size: 64, offset: 256)
!95 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_write_ptr", scope: !86, file: !87, line: 58, baseType: !91, size: 64, offset: 320)
!96 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_write_end", scope: !86, file: !87, line: 59, baseType: !91, size: 64, offset: 384)
!97 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_buf_base", scope: !86, file: !87, line: 60, baseType: !91, size: 64, offset: 448)
!98 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_buf_end", scope: !86, file: !87, line: 61, baseType: !91, size: 64, offset: 512)
!99 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_save_base", scope: !86, file: !87, line: 64, baseType: !91, size: 64, offset: 576)
!100 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_backup_base", scope: !86, file: !87, line: 65, baseType: !91, size: 64, offset: 640)
!101 = !DIDerivedType(tag: DW_TAG_member, name: "_IO_save_end", scope: !86, file: !87, line: 66, baseType: !91, size: 64, offset: 704)
!102 = !DIDerivedType(tag: DW_TAG_member, name: "_markers", scope: !86, file: !87, line: 68, baseType: !103, size: 64, offset: 768)
!103 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !104, size: 64)
!104 = !DICompositeType(tag: DW_TAG_structure_type, name: "_IO_marker", file: !87, line: 36, flags: DIFlagFwdDecl)
!105 = !DIDerivedType(tag: DW_TAG_member, name: "_chain", scope: !86, file: !87, line: 70, baseType: !106, size: 64, offset: 832)
!106 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !86, size: 64)
!107 = !DIDerivedType(tag: DW_TAG_member, name: "_fileno", scope: !86, file: !87, line: 72, baseType: !74, size: 32, offset: 896)
!108 = !DIDerivedType(tag: DW_TAG_member, name: "_flags2", scope: !86, file: !87, line: 73, baseType: !74, size: 32, offset: 928)
!109 = !DIDerivedType(tag: DW_TAG_member, name: "_old_offset", scope: !86, file: !87, line: 74, baseType: !110, size: 64, offset: 960)
!110 = !DIDerivedType(tag: DW_TAG_typedef, name: "__off_t", file: !111, line: 152, baseType: !112)
!111 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!112 = !DIBasicType(name: "long", size: 64, encoding: DW_ATE_signed)
!113 = !DIDerivedType(tag: DW_TAG_member, name: "_cur_column", scope: !86, file: !87, line: 77, baseType: !33, size: 16, offset: 1024)
!114 = !DIDerivedType(tag: DW_TAG_member, name: "_vtable_offset", scope: !86, file: !87, line: 78, baseType: !115, size: 8, offset: 1040)
!115 = !DIBasicType(name: "signed char", size: 8, encoding: DW_ATE_signed_char)
!116 = !DIDerivedType(tag: DW_TAG_member, name: "_shortbuf", scope: !86, file: !87, line: 79, baseType: !117, size: 8, offset: 1048)
!117 = !DICompositeType(tag: DW_TAG_array_type, baseType: !8, size: 8, elements: !118)
!118 = !{!119}
!119 = !DISubrange(count: 1)
!120 = !DIDerivedType(tag: DW_TAG_member, name: "_lock", scope: !86, file: !87, line: 81, baseType: !121, size: 64, offset: 1088)
!121 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !122, size: 64)
!122 = !DIDerivedType(tag: DW_TAG_typedef, name: "_IO_lock_t", file: !87, line: 43, baseType: null)
!123 = !DIDerivedType(tag: DW_TAG_member, name: "_offset", scope: !86, file: !87, line: 89, baseType: !124, size: 64, offset: 1152)
!124 = !DIDerivedType(tag: DW_TAG_typedef, name: "__off64_t", file: !111, line: 153, baseType: !112)
!125 = !DIDerivedType(tag: DW_TAG_member, name: "_codecvt", scope: !86, file: !87, line: 91, baseType: !126, size: 64, offset: 1216)
!126 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !127, size: 64)
!127 = !DICompositeType(tag: DW_TAG_structure_type, name: "_IO_codecvt", file: !87, line: 37, flags: DIFlagFwdDecl)
!128 = !DIDerivedType(tag: DW_TAG_member, name: "_wide_data", scope: !86, file: !87, line: 92, baseType: !129, size: 64, offset: 1280)
!129 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !130, size: 64)
!130 = !DICompositeType(tag: DW_TAG_structure_type, name: "_IO_wide_data", file: !87, line: 38, flags: DIFlagFwdDecl)
!131 = !DIDerivedType(tag: DW_TAG_member, name: "_freeres_list", scope: !86, file: !87, line: 93, baseType: !106, size: 64, offset: 1344)
!132 = !DIDerivedType(tag: DW_TAG_member, name: "_freeres_buf", scope: !86, file: !87, line: 94, baseType: !133, size: 64, offset: 1408)
!133 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: null, size: 64)
!134 = !DIDerivedType(tag: DW_TAG_member, name: "__pad5", scope: !86, file: !87, line: 95, baseType: !135, size: 64, offset: 1472)
!135 = !DIDerivedType(tag: DW_TAG_typedef, name: "size_t", file: !136, line: 46, baseType: !137)
!136 = !DIFile(filename: "/usr/lib/llvm-17/lib/clang/17/include/stddef.h", directory: "", checksumkind: CSK_MD5, checksum: "d1776268f398bd1ca997c840ad581432")
!137 = !DIBasicType(name: "unsigned long", size: 64, encoding: DW_ATE_unsigned)
!138 = !DIDerivedType(tag: DW_TAG_member, name: "_mode", scope: !86, file: !87, line: 96, baseType: !74, size: 32, offset: 1536)
!139 = !DIDerivedType(tag: DW_TAG_member, name: "_unused2", scope: !86, file: !87, line: 98, baseType: !140, size: 160, offset: 1568)
!140 = !DICompositeType(tag: DW_TAG_array_type, baseType: !8, size: 160, elements: !141)
!141 = !{!142}
!142 = !DISubrange(count: 20)
!143 = !{i32 7, !"Dwarf Version", i32 5}
!144 = !{i32 2, !"Debug Info Version", i32 3}
!145 = !{i32 1, !"wchar_size", i32 4}
!146 = !{i32 8, !"PIC Level", i32 2}
!147 = !{i32 7, !"PIE Level", i32 2}
!148 = !{i32 7, !"uwtable", i32 2}
!149 = !{i32 7, !"frame-pointer", i32 2}
!150 = !{!"Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)"}
!151 = distinct !DISubprogram(name: "assemble", scope: !3, file: !3, line: 22, type: !152, scopeLine: 23, spFlags: DISPFlagDefinition, unit: !2)
!152 = !DISubroutineType(types: !153)
!153 = !{!74}
!154 = !DILocation(line: 26, column: 14, scope: !151)
!155 = !DILocation(line: 26, column: 21, scope: !151)
!156 = !DILocation(line: 26, column: 30, scope: !151)
!157 = !DILocation(line: 26, column: 28, scope: !151)
!158 = !DILocation(line: 26, column: 13, scope: !151)
!159 = !DILocation(line: 26, column: 11, scope: !151)
!160 = !DILocation(line: 28, column: 3, scope: !151)
!161 = !DILocation(line: 30, column: 11, scope: !151)
!162 = !DILocation(line: 30, column: 9, scope: !151)
!163 = !DILocation(line: 33, column: 13, scope: !151)
!164 = !DILocation(line: 33, column: 25, scope: !151)
!165 = !DILocation(line: 33, column: 32, scope: !151)
!166 = !DILocation(line: 33, column: 41, scope: !151)
!167 = !DILocation(line: 33, column: 39, scope: !151)
!168 = !DILocation(line: 33, column: 21, scope: !151)
!169 = !DILocation(line: 33, column: 11, scope: !151)
!170 = !DILocation(line: 35, column: 3, scope: !151)
!171 = !DILocation(line: 37, column: 11, scope: !151)
!172 = !DILocation(line: 37, column: 19, scope: !151)
!173 = !DILocation(line: 37, column: 17, scope: !151)
!174 = !DILocation(line: 37, column: 9, scope: !151)
!175 = !DILocation(line: 40, column: 13, scope: !151)
!176 = !DILocation(line: 40, column: 25, scope: !151)
!177 = !DILocation(line: 40, column: 32, scope: !151)
!178 = !DILocation(line: 40, column: 41, scope: !151)
!179 = !DILocation(line: 40, column: 39, scope: !151)
!180 = !DILocation(line: 40, column: 21, scope: !151)
!181 = !DILocation(line: 40, column: 11, scope: !151)
!182 = !DILocation(line: 42, column: 3, scope: !151)
!183 = !DILocation(line: 44, column: 11, scope: !151)
!184 = !DILocation(line: 44, column: 19, scope: !151)
!185 = !DILocation(line: 44, column: 17, scope: !151)
!186 = !DILocation(line: 44, column: 9, scope: !151)
!187 = !DILocation(line: 47, column: 13, scope: !151)
!188 = !DILocation(line: 47, column: 25, scope: !151)
!189 = !DILocation(line: 47, column: 32, scope: !151)
!190 = !DILocation(line: 47, column: 41, scope: !151)
!191 = !DILocation(line: 47, column: 39, scope: !151)
!192 = !DILocation(line: 47, column: 21, scope: !151)
!193 = !DILocation(line: 47, column: 11, scope: !151)
!194 = !DILocation(line: 49, column: 3, scope: !151)
!195 = !DILocation(line: 51, column: 11, scope: !151)
!196 = !DILocation(line: 51, column: 19, scope: !151)
!197 = !DILocation(line: 51, column: 17, scope: !151)
!198 = !DILocation(line: 51, column: 9, scope: !151)
!199 = !DILocation(line: 54, column: 13, scope: !151)
!200 = !DILocation(line: 54, column: 25, scope: !151)
!201 = !DILocation(line: 54, column: 32, scope: !151)
!202 = !DILocation(line: 54, column: 41, scope: !151)
!203 = !DILocation(line: 54, column: 39, scope: !151)
!204 = !DILocation(line: 54, column: 21, scope: !151)
!205 = !DILocation(line: 54, column: 11, scope: !151)
!206 = !DILocation(line: 56, column: 3, scope: !151)
!207 = !DILocation(line: 58, column: 11, scope: !151)
!208 = !DILocation(line: 58, column: 19, scope: !151)
!209 = !DILocation(line: 58, column: 17, scope: !151)
!210 = !DILocation(line: 58, column: 9, scope: !151)
!211 = !DILocation(line: 61, column: 13, scope: !151)
!212 = !DILocation(line: 61, column: 25, scope: !151)
!213 = !DILocation(line: 61, column: 33, scope: !151)
!214 = !DILocation(line: 61, column: 42, scope: !151)
!215 = !DILocation(line: 61, column: 40, scope: !151)
!216 = !DILocation(line: 61, column: 21, scope: !151)
!217 = !DILocation(line: 61, column: 11, scope: !151)
!218 = !DILocation(line: 63, column: 3, scope: !151)
!219 = !DILocation(line: 65, column: 11, scope: !151)
!220 = !DILocation(line: 65, column: 19, scope: !151)
!221 = !DILocation(line: 65, column: 17, scope: !151)
!222 = !DILocation(line: 65, column: 9, scope: !151)
!223 = !DILocation(line: 68, column: 13, scope: !151)
!224 = !DILocation(line: 68, column: 25, scope: !151)
!225 = !DILocation(line: 68, column: 33, scope: !151)
!226 = !DILocation(line: 68, column: 42, scope: !151)
!227 = !DILocation(line: 68, column: 40, scope: !151)
!228 = !DILocation(line: 68, column: 21, scope: !151)
!229 = !DILocation(line: 68, column: 11, scope: !151)
!230 = !DILocation(line: 70, column: 3, scope: !151)
!231 = !DILocation(line: 72, column: 11, scope: !151)
!232 = !DILocation(line: 72, column: 19, scope: !151)
!233 = !DILocation(line: 72, column: 17, scope: !151)
!234 = !DILocation(line: 72, column: 9, scope: !151)
!235 = !DILocation(line: 75, column: 13, scope: !151)
!236 = !DILocation(line: 75, column: 25, scope: !151)
!237 = !DILocation(line: 75, column: 33, scope: !151)
!238 = !DILocation(line: 75, column: 42, scope: !151)
!239 = !DILocation(line: 75, column: 40, scope: !151)
!240 = !DILocation(line: 75, column: 21, scope: !151)
!241 = !DILocation(line: 75, column: 11, scope: !151)
!242 = !DILocation(line: 77, column: 3, scope: !151)
!243 = !DILocation(line: 79, column: 11, scope: !151)
!244 = !DILocation(line: 79, column: 19, scope: !151)
!245 = !DILocation(line: 79, column: 17, scope: !151)
!246 = !DILocation(line: 79, column: 9, scope: !151)
!247 = !DILocation(line: 82, column: 13, scope: !151)
!248 = !DILocation(line: 82, column: 25, scope: !151)
!249 = !DILocation(line: 82, column: 33, scope: !151)
!250 = !DILocation(line: 82, column: 42, scope: !151)
!251 = !DILocation(line: 82, column: 40, scope: !151)
!252 = !DILocation(line: 82, column: 21, scope: !151)
!253 = !DILocation(line: 82, column: 11, scope: !151)
!254 = !DILocation(line: 84, column: 3, scope: !151)
!255 = !DILocation(line: 86, column: 11, scope: !151)
!256 = !DILocation(line: 86, column: 19, scope: !151)
!257 = !DILocation(line: 86, column: 17, scope: !151)
!258 = !DILocation(line: 86, column: 9, scope: !151)
!259 = !DILocation(line: 89, column: 13, scope: !151)
!260 = !DILocation(line: 89, column: 25, scope: !151)
!261 = !DILocation(line: 89, column: 33, scope: !151)
!262 = !DILocation(line: 89, column: 42, scope: !151)
!263 = !DILocation(line: 89, column: 40, scope: !151)
!264 = !DILocation(line: 89, column: 21, scope: !151)
!265 = !DILocation(line: 89, column: 11, scope: !151)
!266 = !DILocation(line: 91, column: 3, scope: !151)
!267 = !DILocation(line: 93, column: 11, scope: !151)
!268 = !DILocation(line: 93, column: 19, scope: !151)
!269 = !DILocation(line: 93, column: 17, scope: !151)
!270 = !DILocation(line: 93, column: 9, scope: !151)
!271 = !DILocation(line: 96, column: 14, scope: !151)
!272 = !DILocation(line: 96, column: 26, scope: !151)
!273 = !DILocation(line: 96, column: 34, scope: !151)
!274 = !DILocation(line: 96, column: 43, scope: !151)
!275 = !DILocation(line: 96, column: 41, scope: !151)
!276 = !DILocation(line: 96, column: 22, scope: !151)
!277 = !DILocation(line: 96, column: 12, scope: !151)
!278 = !DILocation(line: 98, column: 3, scope: !151)
!279 = !DILocation(line: 100, column: 11, scope: !151)
!280 = !DILocation(line: 100, column: 19, scope: !151)
!281 = !DILocation(line: 100, column: 17, scope: !151)
!282 = !DILocation(line: 100, column: 9, scope: !151)
!283 = !DILocation(line: 103, column: 14, scope: !151)
!284 = !DILocation(line: 103, column: 27, scope: !151)
!285 = !DILocation(line: 103, column: 35, scope: !151)
!286 = !DILocation(line: 103, column: 44, scope: !151)
!287 = !DILocation(line: 103, column: 42, scope: !151)
!288 = !DILocation(line: 103, column: 23, scope: !151)
!289 = !DILocation(line: 103, column: 12, scope: !151)
!290 = !DILocation(line: 105, column: 3, scope: !151)
!291 = !DILocation(line: 107, column: 11, scope: !151)
!292 = !DILocation(line: 107, column: 19, scope: !151)
!293 = !DILocation(line: 107, column: 17, scope: !151)
!294 = !DILocation(line: 107, column: 9, scope: !151)
!295 = !DILocation(line: 110, column: 14, scope: !151)
!296 = !DILocation(line: 110, column: 27, scope: !151)
!297 = !DILocation(line: 110, column: 35, scope: !151)
!298 = !DILocation(line: 110, column: 44, scope: !151)
!299 = !DILocation(line: 110, column: 42, scope: !151)
!300 = !DILocation(line: 110, column: 23, scope: !151)
!301 = !DILocation(line: 110, column: 12, scope: !151)
!302 = !DILocation(line: 112, column: 3, scope: !151)
!303 = !DILocation(line: 114, column: 11, scope: !151)
!304 = !DILocation(line: 114, column: 19, scope: !151)
!305 = !DILocation(line: 114, column: 17, scope: !151)
!306 = !DILocation(line: 114, column: 9, scope: !151)
!307 = !DILocation(line: 117, column: 14, scope: !151)
!308 = !DILocation(line: 117, column: 27, scope: !151)
!309 = !DILocation(line: 117, column: 35, scope: !151)
!310 = !DILocation(line: 117, column: 44, scope: !151)
!311 = !DILocation(line: 117, column: 42, scope: !151)
!312 = !DILocation(line: 117, column: 23, scope: !151)
!313 = !DILocation(line: 117, column: 12, scope: !151)
!314 = !DILocation(line: 119, column: 3, scope: !151)
!315 = !DILocation(line: 121, column: 11, scope: !151)
!316 = !DILocation(line: 121, column: 19, scope: !151)
!317 = !DILocation(line: 121, column: 17, scope: !151)
!318 = !DILocation(line: 121, column: 9, scope: !151)
!319 = !DILocation(line: 124, column: 14, scope: !151)
!320 = !DILocation(line: 124, column: 27, scope: !151)
!321 = !DILocation(line: 124, column: 35, scope: !151)
!322 = !DILocation(line: 124, column: 44, scope: !151)
!323 = !DILocation(line: 124, column: 42, scope: !151)
!324 = !DILocation(line: 124, column: 23, scope: !151)
!325 = !DILocation(line: 124, column: 12, scope: !151)
!326 = !DILocation(line: 126, column: 3, scope: !151)
!327 = !DILocation(line: 128, column: 11, scope: !151)
!328 = !DILocation(line: 128, column: 19, scope: !151)
!329 = !DILocation(line: 128, column: 17, scope: !151)
!330 = !DILocation(line: 128, column: 9, scope: !151)
!331 = !DILocation(line: 131, column: 14, scope: !151)
!332 = !DILocation(line: 131, column: 27, scope: !151)
!333 = !DILocation(line: 131, column: 35, scope: !151)
!334 = !DILocation(line: 131, column: 44, scope: !151)
!335 = !DILocation(line: 131, column: 42, scope: !151)
!336 = !DILocation(line: 131, column: 23, scope: !151)
!337 = !DILocation(line: 131, column: 12, scope: !151)
!338 = !DILocation(line: 133, column: 3, scope: !151)
!339 = !DILocation(line: 135, column: 11, scope: !151)
!340 = !DILocation(line: 135, column: 19, scope: !151)
!341 = !DILocation(line: 135, column: 17, scope: !151)
!342 = !DILocation(line: 135, column: 9, scope: !151)
!343 = !DILocation(line: 138, column: 5, scope: !151)
!344 = !DILocation(line: 140, column: 3, scope: !151)
!345 = distinct !DISubprogram(name: "code", scope: !3, file: !3, line: 144, type: !152, scopeLine: 145, spFlags: DISPFlagDefinition, unit: !2)
!346 = !DILocation(line: 147, column: 8, scope: !345)
!347 = !DILocation(line: 147, column: 15, scope: !345)
!348 = !DILocation(line: 147, column: 13, scope: !345)
!349 = !DILocation(line: 147, column: 6, scope: !345)
!350 = !DILocation(line: 149, column: 13, scope: !345)
!351 = !DILocation(line: 149, column: 8, scope: !345)
!352 = !DILocation(line: 149, column: 6, scope: !345)
!353 = !DILocation(line: 151, column: 6, scope: !345)
!354 = !DILocation(line: 153, column: 6, scope: !345)
!355 = !DILocation(line: 156, column: 9, scope: !345)
!356 = !DILocation(line: 156, column: 7, scope: !345)
!357 = !DILocation(line: 158, column: 8, scope: !345)
!358 = !DILocation(line: 158, column: 6, scope: !345)
!359 = !DILocation(line: 160, column: 8, scope: !345)
!360 = !DILocation(line: 160, column: 6, scope: !345)
!361 = !DILocation(line: 163, column: 9, scope: !345)
!362 = !DILocation(line: 163, column: 7, scope: !345)
!363 = !DILocation(line: 165, column: 8, scope: !345)
!364 = !DILocation(line: 165, column: 6, scope: !345)
!365 = !DILocation(line: 167, column: 8, scope: !345)
!366 = !DILocation(line: 167, column: 6, scope: !345)
!367 = !DILocation(line: 170, column: 7, scope: !368)
!368 = distinct !DILexicalBlock(scope: !345, file: !3, line: 170, column: 7)
!369 = !DILocation(line: 170, column: 10, scope: !368)
!370 = !DILocation(line: 170, column: 7, scope: !345)
!371 = !DILocation(line: 174, column: 10, scope: !372)
!372 = distinct !DILexicalBlock(scope: !368, file: !3, line: 172, column: 3)
!373 = !DILocation(line: 174, column: 15, scope: !372)
!374 = !DILocation(line: 174, column: 13, scope: !372)
!375 = !DILocation(line: 174, column: 8, scope: !372)
!376 = !DILocation(line: 176, column: 3, scope: !372)
!377 = !DILocation(line: 178, column: 9, scope: !345)
!378 = !DILocation(line: 178, column: 7, scope: !345)
!379 = !DILocation(line: 180, column: 8, scope: !345)
!380 = !DILocation(line: 180, column: 6, scope: !345)
!381 = !DILocation(line: 182, column: 8, scope: !345)
!382 = !DILocation(line: 182, column: 6, scope: !345)
!383 = !DILocation(line: 185, column: 7, scope: !384)
!384 = distinct !DILexicalBlock(scope: !345, file: !3, line: 185, column: 7)
!385 = !DILocation(line: 185, column: 10, scope: !384)
!386 = !DILocation(line: 185, column: 7, scope: !345)
!387 = !DILocation(line: 189, column: 10, scope: !388)
!388 = distinct !DILexicalBlock(scope: !384, file: !3, line: 187, column: 3)
!389 = !DILocation(line: 189, column: 15, scope: !388)
!390 = !DILocation(line: 189, column: 13, scope: !388)
!391 = !DILocation(line: 189, column: 8, scope: !388)
!392 = !DILocation(line: 191, column: 10, scope: !388)
!393 = !DILocation(line: 191, column: 15, scope: !388)
!394 = !DILocation(line: 191, column: 13, scope: !388)
!395 = !DILocation(line: 191, column: 8, scope: !388)
!396 = !DILocation(line: 193, column: 3, scope: !388)
!397 = !DILocation(line: 195, column: 9, scope: !345)
!398 = !DILocation(line: 195, column: 7, scope: !345)
!399 = !DILocation(line: 197, column: 8, scope: !345)
!400 = !DILocation(line: 197, column: 6, scope: !345)
!401 = !DILocation(line: 199, column: 8, scope: !345)
!402 = !DILocation(line: 199, column: 6, scope: !345)
!403 = !DILocation(line: 201, column: 8, scope: !345)
!404 = !DILocation(line: 201, column: 13, scope: !345)
!405 = !DILocation(line: 201, column: 11, scope: !345)
!406 = !DILocation(line: 201, column: 6, scope: !345)
!407 = !DILocation(line: 203, column: 8, scope: !345)
!408 = !DILocation(line: 203, column: 13, scope: !345)
!409 = !DILocation(line: 203, column: 11, scope: !345)
!410 = !DILocation(line: 203, column: 6, scope: !345)
!411 = !DILocation(line: 206, column: 8, scope: !345)
!412 = !DILocation(line: 206, column: 11, scope: !345)
!413 = !DILocation(line: 206, column: 6, scope: !345)
!414 = !DILocation(line: 209, column: 10, scope: !345)
!415 = !DILocation(line: 209, column: 8, scope: !345)
!416 = !DILocation(line: 211, column: 13, scope: !345)
!417 = !DILocation(line: 211, column: 8, scope: !345)
!418 = !DILocation(line: 211, column: 3, scope: !345)
!419 = !DILocation(line: 211, column: 11, scope: !345)
!420 = !DILocation(line: 214, column: 9, scope: !345)
!421 = !DILocation(line: 214, column: 14, scope: !345)
!422 = !DILocation(line: 214, column: 12, scope: !345)
!423 = !DILocation(line: 214, column: 7, scope: !345)
!424 = !DILocation(line: 216, column: 7, scope: !345)
!425 = !DILocation(line: 216, column: 9, scope: !345)
!426 = !DILocation(line: 216, column: 5, scope: !345)
!427 = !DILocation(line: 218, column: 3, scope: !345)
!428 = distinct !DISubprogram(name: "my_rand_r", scope: !3, file: !3, line: 223, type: !429, scopeLine: 224, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !432)
!429 = !DISubroutineType(types: !430)
!430 = !{!74, !431}
!431 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !74, size: 64)
!432 = !{}
!433 = !DILocalVariable(name: "seedp", arg: 1, scope: !428, file: !3, line: 223, type: !431)
!434 = !DILocation(line: 223, column: 20, scope: !428)
!435 = !DILocalVariable(name: "x", scope: !428, file: !3, line: 226, type: !436)
!436 = !DIBasicType(name: "unsigned int", size: 32, encoding: DW_ATE_unsigned)
!437 = !DILocation(line: 226, column: 12, scope: !428)
!438 = !DILocation(line: 226, column: 17, scope: !428)
!439 = !DILocation(line: 226, column: 16, scope: !428)
!440 = !DILocation(line: 226, column: 23, scope: !428)
!441 = !DILocation(line: 226, column: 33, scope: !428)
!442 = !DILocation(line: 227, column: 12, scope: !428)
!443 = !DILocation(line: 227, column: 4, scope: !428)
!444 = !DILocation(line: 227, column: 10, scope: !428)
!445 = !DILocation(line: 228, column: 11, scope: !428)
!446 = !DILocation(line: 228, column: 13, scope: !428)
!447 = !DILocation(line: 228, column: 20, scope: !428)
!448 = !DILocation(line: 228, column: 3, scope: !428)
!449 = distinct !DISubprogram(name: "pc1_drive", scope: !3, file: !3, line: 231, type: !450, scopeLine: 232, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !432)
!450 = !DISubroutineType(types: !451)
!451 = !{!74, !431, !431}
!452 = !DILocalVariable(name: "retd", arg: 1, scope: !449, file: !3, line: 231, type: !431)
!453 = !DILocation(line: 231, column: 20, scope: !449)
!454 = !DILocalVariable(name: "rete", arg: 2, scope: !449, file: !3, line: 231, type: !431)
!455 = !DILocation(line: 231, column: 31, scope: !449)
!456 = !DILocalVariable(name: "NumInput", scope: !449, file: !3, line: 233, type: !74)
!457 = !DILocation(line: 233, column: 7, scope: !449)
!458 = !DILocalVariable(name: "Print", scope: !449, file: !3, line: 234, type: !74)
!459 = !DILocation(line: 234, column: 7, scope: !449)
!460 = !DILocalVariable(name: "random_seed", scope: !449, file: !3, line: 235, type: !74)
!461 = !DILocation(line: 235, column: 7, scope: !449)
!462 = !DILocalVariable(name: "k", scope: !449, file: !3, line: 236, type: !74)
!463 = !DILocation(line: 236, column: 7, scope: !449)
!464 = !DILocation(line: 238, column: 6, scope: !449)
!465 = !DILocation(line: 240, column: 8, scope: !449)
!466 = !DILocation(line: 242, column: 5, scope: !449)
!467 = !DILocation(line: 250, column: 3, scope: !449)
!468 = !DILocation(line: 256, column: 11, scope: !449)
!469 = !DILocation(line: 259, column: 7, scope: !470)
!470 = distinct !DILexicalBlock(scope: !449, file: !3, line: 259, column: 7)
!471 = !DILocation(line: 259, column: 20, scope: !470)
!472 = !DILocation(line: 259, column: 7, scope: !449)
!473 = !DILocation(line: 262, column: 11, scope: !474)
!474 = distinct !DILexicalBlock(scope: !470, file: !3, line: 261, column: 3)
!475 = !DILocation(line: 263, column: 3, scope: !474)
!476 = !DILocation(line: 267, column: 13, scope: !477)
!477 = distinct !DILexicalBlock(scope: !470, file: !3, line: 266, column: 3)
!478 = !DILocation(line: 267, column: 11, scope: !477)
!479 = !DILocation(line: 270, column: 11, scope: !480)
!480 = distinct !DILexicalBlock(scope: !449, file: !3, line: 270, column: 3)
!481 = !DILocation(line: 270, column: 8, scope: !480)
!482 = !DILocation(line: 270, column: 16, scope: !483)
!483 = distinct !DILexicalBlock(scope: !480, file: !3, line: 270, column: 3)
!484 = !DILocation(line: 270, column: 21, scope: !483)
!485 = !DILocation(line: 270, column: 19, scope: !483)
!486 = !DILocation(line: 270, column: 3, scope: !480)
!487 = !DILocation(line: 274, column: 20, scope: !488)
!488 = distinct !DILexicalBlock(scope: !483, file: !3, line: 272, column: 3)
!489 = !DILocation(line: 274, column: 15, scope: !488)
!490 = !DILocation(line: 274, column: 9, scope: !488)
!491 = !DILocation(line: 274, column: 5, scope: !488)
!492 = !DILocation(line: 274, column: 13, scope: !488)
!493 = !DILocation(line: 276, column: 3, scope: !488)
!494 = !DILocation(line: 270, column: 30, scope: !483)
!495 = !DILocation(line: 270, column: 3, scope: !483)
!496 = distinct !{!496, !486, !497, !498}
!497 = !DILocation(line: 276, column: 3, scope: !480)
!498 = !{!"llvm.loop.mustprogress"}
!499 = !DILocation(line: 278, column: 9, scope: !449)
!500 = !DILocation(line: 279, column: 3, scope: !449)
!501 = !DILocation(line: 279, column: 10, scope: !449)
!502 = !DILocation(line: 280, column: 9, scope: !503)
!503 = distinct !DILexicalBlock(scope: !449, file: !3, line: 279, column: 22)
!504 = !DILocation(line: 280, column: 7, scope: !503)
!505 = !DILocation(line: 281, column: 5, scope: !503)
!506 = !DILocation(line: 283, column: 11, scope: !503)
!507 = !DILocation(line: 283, column: 17, scope: !503)
!508 = !DILocation(line: 283, column: 9, scope: !503)
!509 = !DILocation(line: 285, column: 11, scope: !503)
!510 = !DILocation(line: 285, column: 17, scope: !503)
!511 = !DILocation(line: 285, column: 9, scope: !503)
!512 = !DILocation(line: 294, column: 17, scope: !513)
!513 = distinct !DILexicalBlock(scope: !503, file: !3, line: 294, column: 5)
!514 = !DILocation(line: 294, column: 10, scope: !513)
!515 = !DILocation(line: 294, column: 22, scope: !516)
!516 = distinct !DILexicalBlock(scope: !513, file: !3, line: 294, column: 5)
!517 = !DILocation(line: 294, column: 29, scope: !516)
!518 = !DILocation(line: 294, column: 5, scope: !513)
!519 = !DILocation(line: 299, column: 25, scope: !520)
!520 = distinct !DILexicalBlock(scope: !516, file: !3, line: 295, column: 5)
!521 = !DILocation(line: 299, column: 21, scope: !520)
!522 = !DILocation(line: 299, column: 35, scope: !520)
!523 = !DILocation(line: 299, column: 33, scope: !520)
!524 = !DILocation(line: 299, column: 11, scope: !520)
!525 = !DILocation(line: 299, column: 7, scope: !520)
!526 = !DILocation(line: 299, column: 19, scope: !520)
!527 = !DILocation(line: 301, column: 5, scope: !520)
!528 = !DILocation(line: 294, column: 42, scope: !516)
!529 = !DILocation(line: 294, column: 5, scope: !516)
!530 = distinct !{!530, !518, !531, !498}
!531 = !DILocation(line: 301, column: 5, scope: !513)
!532 = !DILocation(line: 303, column: 9, scope: !503)
!533 = !DILocation(line: 303, column: 14, scope: !503)
!534 = !DILocation(line: 303, column: 20, scope: !503)
!535 = !DILocation(line: 303, column: 18, scope: !503)
!536 = !DILocation(line: 303, column: 11, scope: !503)
!537 = !DILocation(line: 303, column: 7, scope: !503)
!538 = !DILocation(line: 307, column: 10, scope: !503)
!539 = !DILocation(line: 307, column: 12, scope: !503)
!540 = !DILocation(line: 307, column: 9, scope: !503)
!541 = !DILocation(line: 307, column: 7, scope: !503)
!542 = !DILocation(line: 310, column: 10, scope: !503)
!543 = !DILocation(line: 310, column: 12, scope: !503)
!544 = !DILocation(line: 310, column: 9, scope: !503)
!545 = !DILocation(line: 310, column: 7, scope: !503)
!546 = !DILocation(line: 312, column: 10, scope: !547)
!547 = distinct !DILexicalBlock(scope: !503, file: !3, line: 312, column: 9)
!548 = !DILocation(line: 312, column: 19, scope: !547)
!549 = !DILocation(line: 312, column: 27, scope: !547)
!550 = !DILocation(line: 312, column: 9, scope: !503)
!551 = !DILocation(line: 313, column: 17, scope: !552)
!552 = distinct !DILexicalBlock(scope: !547, file: !3, line: 312, column: 32)
!553 = !DILocation(line: 313, column: 7, scope: !552)
!554 = !DILocation(line: 313, column: 12, scope: !552)
!555 = !DILocation(line: 313, column: 15, scope: !552)
!556 = !DILocation(line: 314, column: 17, scope: !552)
!557 = !DILocation(line: 314, column: 7, scope: !552)
!558 = !DILocation(line: 314, column: 12, scope: !552)
!559 = !DILocation(line: 314, column: 15, scope: !552)
!560 = !DILocation(line: 315, column: 8, scope: !552)
!561 = !DILocation(line: 316, column: 5, scope: !552)
!562 = distinct !{!562, !500, !563, !498}
!563 = !DILocation(line: 317, column: 3, scope: !449)
!564 = !DILocation(line: 319, column: 3, scope: !449)
!565 = distinct !DISubprogram(name: "main", scope: !3, file: !3, line: 322, type: !566, scopeLine: 322, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !432)
!566 = !DISubroutineType(types: !567)
!567 = !{!74, !74, !568}
!568 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !569, size: 64)
!569 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !570, size: 64)
!570 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !8)
!571 = !DILocalVariable(name: "argc", arg: 1, scope: !565, file: !3, line: 322, type: !74)
!572 = !DILocation(line: 322, column: 14, scope: !565)
!573 = !DILocalVariable(name: "argv", arg: 2, scope: !565, file: !3, line: 322, type: !568)
!574 = !DILocation(line: 322, column: 33, scope: !565)
!575 = !DILocation(line: 323, column: 7, scope: !576)
!576 = distinct !DILexicalBlock(scope: !565, file: !3, line: 323, column: 7)
!577 = !DILocation(line: 323, column: 12, scope: !576)
!578 = !DILocation(line: 323, column: 7, scope: !565)
!579 = !DILocation(line: 323, column: 17, scope: !576)
!580 = !DILocation(line: 324, column: 3, scope: !565)
!581 = !DILocalVariable(name: "retd", scope: !565, file: !3, line: 325, type: !582)
!582 = !DICompositeType(tag: DW_TAG_array_type, baseType: !74, size: 288, elements: !583)
!583 = !{!584}
!584 = !DISubrange(count: 9)
!585 = !DILocation(line: 325, column: 7, scope: !565)
!586 = !DILocalVariable(name: "rete", scope: !565, file: !3, line: 326, type: !582)
!587 = !DILocation(line: 326, column: 7, scope: !565)
!588 = !DILocation(line: 327, column: 13, scope: !565)
!589 = !DILocation(line: 327, column: 19, scope: !565)
!590 = !DILocation(line: 327, column: 3, scope: !565)
!591 = !DILocalVariable(name: "i", scope: !592, file: !3, line: 328, type: !74)
!592 = distinct !DILexicalBlock(scope: !565, file: !3, line: 328, column: 3)
!593 = !DILocation(line: 328, column: 11, scope: !592)
!594 = !DILocation(line: 328, column: 7, scope: !592)
!595 = !DILocation(line: 328, column: 18, scope: !596)
!596 = distinct !DILexicalBlock(scope: !592, file: !3, line: 328, column: 3)
!597 = !DILocation(line: 328, column: 20, scope: !596)
!598 = !DILocation(line: 328, column: 3, scope: !592)
!599 = !DILocation(line: 329, column: 27, scope: !600)
!600 = distinct !DILexicalBlock(scope: !596, file: !3, line: 328, column: 30)
!601 = !DILocation(line: 329, column: 22, scope: !600)
!602 = !DILocation(line: 329, column: 36, scope: !600)
!603 = !DILocation(line: 329, column: 31, scope: !600)
!604 = !DILocation(line: 329, column: 5, scope: !600)
!605 = !DILocation(line: 330, column: 3, scope: !600)
!606 = !DILocation(line: 328, column: 26, scope: !596)
!607 = !DILocation(line: 328, column: 3, scope: !596)
!608 = distinct !{!608, !598, !609, !498}
!609 = !DILocation(line: 330, column: 3, scope: !592)
!610 = !DILocation(line: 331, column: 3, scope: !565)
!611 = !DILocation(line: 332, column: 3, scope: !565)
