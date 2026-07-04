

# File mtx.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**mtx.h**](mtx_8h.md)

[Go to the source code of this file](mtx_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**MTXStack**](struct_m_t_x_stack.md) <br> |
| struct | [**Quaternion**](struct_quaternion.md) <br> |
| struct | [**S16Vec**](struct_s16_vec.md) <br> |
| struct | [**Vec**](struct_vec.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**f32**](types_8h.md#typedef-f32) | [**Mtx**](#typedef-mtx)  <br> |
| typedef [**f32**](types_8h.md#typedef-f32) | [**Mtx44**](#typedef-mtx44)  <br> |
| typedef [**f32**](types_8h.md#typedef-f32)(\* | [**Mtx44Ptr**](#typedef-mtx44ptr)  <br> |
| typedef [**f32**](types_8h.md#typedef-f32)(\* | [**MtxPtr**](#typedef-mtxptr)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) | [**Point3d**](#typedef-point3d)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* | [**Point3dPtr**](#typedef-point3dptr)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Quaternion**](struct_quaternion.md) | [**Qtrn**](#typedef-qtrn)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Quaternion**](struct_quaternion.md) \* | [**QtrnPtr**](#typedef-qtrnptr)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Quaternion**](struct_quaternion.md) \* | [**QuaternionPtr**](#typedef-quaternionptr)  <br> |
| typedef [**f32**](types_8h.md#typedef-f32) | [**ROMtx**](#typedef-romtx)  <br> |
| typedef [**f32**](types_8h.md#typedef-f32)(\* | [**ROMtxPtr**](#typedef-romtxptr)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**S16Vec**](struct_s16_vec.md) \* | [**S16VecPtr**](#typedef-s16vecptr)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* | [**VecPtr**](#typedef-vecptr)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXConcat**](#function-c_mtxconcat) ([**Mtx**](mtx_8h.md#typedef-mtx) a, [**Mtx**](mtx_8h.md#typedef-mtx) b, [**Mtx**](mtx_8h.md#typedef-mtx) ab) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXCopy**](#function-c_mtxcopy) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXFrustum**](#function-c_mtxfrustum) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**f32**](types_8h.md#typedef-f32) t, [**f32**](types_8h.md#typedef-f32) b, [**f32**](types_8h.md#typedef-f32) l, [**f32**](types_8h.md#typedef-f32) r, [**f32**](types_8h.md#typedef-f32) n, [**f32**](types_8h.md#typedef-f32) f) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXIdentity**](#function-c_mtxidentity) ([**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**C\_MTXInvXpose**](#function-c_mtxinvxpose) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) invX) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**C\_MTXInverse**](#function-c_mtxinverse) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) inv) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXLookAt**](#function-c_mtxlookat) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Point3dPtr**](mtx_8h.md#typedef-point3dptr) camPos, [**VecPtr**](mtx_8h.md#typedef-vecptr) camUp, [**Point3dPtr**](mtx_8h.md#typedef-point3dptr) target) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXMultVec**](#function-c_mtxmultvec) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXMultVecArray**](#function-c_mtxmultvecarray) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXPerspective**](#function-c_mtxperspective) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**f32**](types_8h.md#typedef-f32) fovY, [**f32**](types_8h.md#typedef-f32) aspect, [**f32**](types_8h.md#typedef-f32) n, [**f32**](types_8h.md#typedef-f32) f) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXTranspose**](#function-c_mtxtranspose) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) xPose) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECAdd**](#function-c_vecadd) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* c) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECCrossProduct**](#function-c_veccrossproduct) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* axb) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**C\_VECDotProduct**](#function-c_vecdotproduct) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECNormalize**](#function-c_vecnormalize) ([**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* unit) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECScale**](#function-c_vecscale) ([**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* dst, [**f32**](types_8h.md#typedef-f32) scale) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**C\_VECSquareDistance**](#function-c_vecsquaredistance) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**C\_VECSquareMag**](#function-c_vecsquaremag) ([**Vec**](struct_vec.md) \* v) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECSubtract**](#function-c_vecsubtract) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* c) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXGetStackPtr**](#function-mtxgetstackptr) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXInitStack**](#function-mtxinitstack) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**u32**](types_8h.md#typedef-u32) numMtx) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXLightFrustum**](#function-mtxlightfrustum) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) t, [**f32**](types_8h.md#typedef-f32) b, [**f32**](types_8h.md#typedef-f32) l, [**f32**](types_8h.md#typedef-f32) r, [**f32**](types_8h.md#typedef-f32) n, [**f32**](types_8h.md#typedef-f32) scaleS, [**f32**](types_8h.md#typedef-f32) scaleT, [**f32**](types_8h.md#typedef-f32) transS, [**f32**](types_8h.md#typedef-f32) transT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXLightOrtho**](#function-mtxlightortho) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) t, [**f32**](types_8h.md#typedef-f32) b, [**f32**](types_8h.md#typedef-f32) l, [**f32**](types_8h.md#typedef-f32) r, [**f32**](types_8h.md#typedef-f32) scaleS, [**f32**](types_8h.md#typedef-f32) scaleT, [**f32**](types_8h.md#typedef-f32) transS, [**f32**](types_8h.md#typedef-f32) transT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXLightPerspective**](#function-mtxlightperspective) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) fovY, [**f32**](types_8h.md#typedef-f32) aspect, [**f32**](types_8h.md#typedef-f32) scaleS, [**f32**](types_8h.md#typedef-f32) scaleT, [**f32**](types_8h.md#typedef-f32) transS, [**f32**](types_8h.md#typedef-f32) transT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXLookAt**](#function-mtxlookat) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* camPos, [**Vec**](struct_vec.md) \* camUp, [**Vec**](struct_vec.md) \* target) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXMultVecArraySR**](#function-mtxmultvecarraysr) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**Vec**](struct_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXMultVecSR**](#function-mtxmultvecsr) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXOrtho**](#function-mtxortho) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**f32**](types_8h.md#typedef-f32) t, [**f32**](types_8h.md#typedef-f32) b, [**f32**](types_8h.md#typedef-f32) l, [**f32**](types_8h.md#typedef-f32) r, [**f32**](types_8h.md#typedef-f32) n, [**f32**](types_8h.md#typedef-f32) f) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPop**](#function-mtxpop) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPush**](#function-mtxpush) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPushFwd**](#function-mtxpushfwd) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPushInv**](#function-mtxpushinv) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPushInvXpose**](#function-mtxpushinvxpose) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXQuat**](#function-mtxquat) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**QuaternionPtr**](mtx_8h.md#typedef-quaternionptr) q) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXReflect**](#function-mtxreflect) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* p, [**Vec**](struct_vec.md) \* n) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXRotAxisRad**](#function-mtxrotaxisrad) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* axis, [**f32**](types_8h.md#typedef-f32) rad) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXRotRad**](#function-mtxrotrad) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**s8**](types_8h.md#typedef-s8) axis, [**f32**](types_8h.md#typedef-f32) rad) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXRotTrig**](#function-mtxrottrig) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**s8**](types_8h.md#typedef-s8) axis, [**f32**](types_8h.md#typedef-f32) sinA, [**f32**](types_8h.md#typedef-f32) cosA) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXScale**](#function-mtxscale) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) xS, [**f32**](types_8h.md#typedef-f32) yS, [**f32**](types_8h.md#typedef-f32) zS) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXScaleApply**](#function-mtxscaleapply) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) dst, [**f32**](types_8h.md#typedef-f32) xS, [**f32**](types_8h.md#typedef-f32) yS, [**f32**](types_8h.md#typedef-f32) zS) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXTrans**](#function-mtxtrans) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) xT, [**f32**](types_8h.md#typedef-f32) yT, [**f32**](types_8h.md#typedef-f32) zT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXTransApply**](#function-mtxtransapply) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) dst, [**f32**](types_8h.md#typedef-f32) xT, [**f32**](types_8h.md#typedef-f32) yT, [**f32**](types_8h.md#typedef-f32) zT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXConcat**](#function-psmtxconcat) ([**Mtx**](mtx_8h.md#typedef-mtx) mA, [**Mtx**](mtx_8h.md#typedef-mtx) mB, [**Mtx**](mtx_8h.md#typedef-mtx) mAB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXCopy**](#function-psmtxcopy) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXIdentity**](#function-psmtxidentity) ([**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PSMTXInvXpose**](#function-psmtxinvxpose) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) invX) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PSMTXInverse**](#function-psmtxinverse) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) inv) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXMultS16VecArray**](#function-psmtxmults16vecarray) ([**Mtx44**](mtx_8h.md#typedef-mtx44) \* m, [**S16Vec**](struct_s16_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXMultVec**](#function-psmtxmultvec) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXMultVecArray**](#function-psmtxmultvecarray) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXROMultS16VecArray**](#function-psmtxromults16vecarray) ([**ROMtx**](mtx_8h.md#typedef-romtx) \* m, [**S16Vec**](struct_s16_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXROMultVecArray**](#function-psmtxromultvecarray) ([**ROMtx**](mtx_8h.md#typedef-romtx) \* m, [**Vec**](struct_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXROSkin2VecArray**](#function-psmtxroskin2vecarray) ([**ROMtx**](mtx_8h.md#typedef-romtx) \* m0, [**ROMtx**](mtx_8h.md#typedef-romtx) \* m1, [**f32**](types_8h.md#typedef-f32) \* wtBase, [**Vec**](struct_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXReorder**](#function-psmtxreorder) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**ROMtx**](mtx_8h.md#typedef-romtx) dest) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXTranspose**](#function-psmtxtranspose) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) xPose) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECAdd**](#function-psvecadd) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* c) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECCrossProduct**](#function-psveccrossproduct) ([**Vec**](struct_vec.md) \* vec1, [**Vec**](struct_vec.md) \* vec2, [**Vec**](struct_vec.md) \* dst) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**PSVECDotProduct**](#function-psvecdotproduct) ([**Vec**](struct_vec.md) \* vec1, [**Vec**](struct_vec.md) \* vec2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECNormalize**](#function-psvecnormalize) ([**Vec**](struct_vec.md) \* vec1, [**Vec**](struct_vec.md) \* dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECScale**](#function-psvecscale) ([**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* dst, [**f32**](types_8h.md#typedef-f32) scale) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**PSVECSquareDistance**](#function-psvecsquaredistance) ([**Vec**](struct_vec.md) \* vec1, [**Vec**](struct_vec.md) \* vec2) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**PSVECSquareMag**](#function-psvecsquaremag) ([**Vec**](struct_vec.md) \* vec1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECSubtract**](#function-psvecsubtract) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* c) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**VECDistance**](#function-vecdistance) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VECHalfAngle**](#function-vechalfangle) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* half) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**VECMag**](#function-vecmag) ([**Vec**](struct_vec.md) \* v) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VECReflect**](#function-vecreflect) ([**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* normal, [**Vec**](struct_vec.md) \* dst) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**MTXConcat**](mtx_8h.md#define-mtxconcat)  `[**PSMTXConcat**](mtx_8h.md#function-psmtxconcat)`<br> |
| define  | [**MTXCopy**](mtx_8h.md#define-mtxcopy)  `[**PSMTXCopy**](mtx_8h.md#function-psmtxcopy)`<br> |
| define  | [**MTXIdentity**](mtx_8h.md#define-mtxidentity)  `[**PSMTXIdentity**](mtx_8h.md#function-psmtxidentity)`<br> |
| define  | [**MTXInverse**](mtx_8h.md#define-mtxinverse)  `[**PSMTXInverse**](mtx_8h.md#function-psmtxinverse)`<br> |
| define  | [**MTXMultS16VecArray**](mtx_8h.md#define-mtxmults16vecarray)  `[**PSMTXMultS16VecArray**](mtx_8h.md#function-psmtxmults16vecarray)`<br> |
| define  | [**MTXMultVec**](mtx_8h.md#define-mtxmultvec)  `[**PSMTXMultVec**](mtx_8h.md#function-psmtxmultvec)`<br> |
| define  | [**MTXMultVecArray**](mtx_8h.md#define-mtxmultvecarray)  `[**PSMTXMultVecArray**](mtx_8h.md#function-psmtxmultvecarray)`<br> |
| define  | [**MTXROMultS16VecArray**](mtx_8h.md#define-mtxromults16vecarray)  `[**PSMTXROMultS16VecArray**](mtx_8h.md#function-psmtxromults16vecarray)`<br> |
| define  | [**MTXROMultVecArray**](mtx_8h.md#define-mtxromultvecarray)  `[**PSMTXROMultVecArray**](mtx_8h.md#function-psmtxromultvecarray)`<br> |
| define  | [**MTXROSkin2VecArray**](mtx_8h.md#define-mtxroskin2vecarray)  `[**PSMTXROSkin2VecArray**](mtx_8h.md#function-psmtxroskin2vecarray)`<br> |
| define  | [**MTXReorder**](mtx_8h.md#define-mtxreorder)  `[**PSMTXReorder**](mtx_8h.md#function-psmtxreorder)`<br> |
| define  | [**MTXTranspose**](mtx_8h.md#define-mtxtranspose)  `[**PSMTXTranspose**](mtx_8h.md#function-psmtxtranspose)`<br> |
| define  | [**VECAdd**](mtx_8h.md#define-vecadd)  `[**PSVECAdd**](mtx_8h.md#function-psvecadd)`<br> |
| define  | [**VECCrossProduct**](mtx_8h.md#define-veccrossproduct)  `[**PSVECCrossProduct**](mtx_8h.md#function-psveccrossproduct)`<br> |
| define  | [**VECDotProduct**](mtx_8h.md#define-vecdotproduct)  `[**PSVECDotProduct**](mtx_8h.md#function-psvecdotproduct)`<br> |
| define  | [**VECNormalize**](mtx_8h.md#define-vecnormalize)  `[**PSVECNormalize**](mtx_8h.md#function-psvecnormalize)`<br> |
| define  | [**VECSquareDistance**](mtx_8h.md#define-vecsquaredistance)  `[**PSVECSquareDistance**](mtx_8h.md#function-psvecsquaredistance)`<br> |
| define  | [**VECSquareMag**](mtx_8h.md#define-vecsquaremag)  `[**PSVECSquareMag**](mtx_8h.md#function-psvecsquaremag)`<br> |

## Public Types Documentation




### typedef Mtx 

```C++
typedef f32 Mtx[3][4];
```




<hr>



### typedef Mtx44 

```C++
typedef f32 Mtx44[4][4];
```




<hr>



### typedef Mtx44Ptr 

```C++
typedef f32(* Mtx44Ptr)[4];
```




<hr>



### typedef MtxPtr 

```C++
typedef f32(* MtxPtr)[4];
```




<hr>



### typedef Point3d 

```C++
typedef  struct Vec Point3d;
```




<hr>



### typedef Point3dPtr 

```C++
typedef  struct Vec * Point3dPtr;
```




<hr>



### typedef Qtrn 

```C++
typedef  struct Quaternion Qtrn;
```




<hr>



### typedef QtrnPtr 

```C++
typedef  struct Quaternion * QtrnPtr;
```




<hr>



### typedef QuaternionPtr 

```C++
typedef  struct Quaternion * QuaternionPtr;
```




<hr>



### typedef ROMtx 

```C++
typedef f32 ROMtx[4][3];
```




<hr>



### typedef ROMtxPtr 

```C++
typedef f32(* ROMtxPtr)[3];
```




<hr>



### typedef S16VecPtr 

```C++
typedef  struct S16Vec * S16VecPtr;
```




<hr>



### typedef VecPtr 

```C++
typedef  struct Vec * VecPtr;
```




<hr>
## Public Functions Documentation




### function C\_MTXConcat 

```C++
void C_MTXConcat (
    Mtx a,
    Mtx b,
    Mtx ab
) 
```




<hr>



### function C\_MTXCopy 

```C++
void C_MTXCopy (
    Mtx src,
    Mtx dst
) 
```




<hr>



### function C\_MTXFrustum 

```C++
void C_MTXFrustum (
    Mtx44 m,
    f32 t,
    f32 b,
    f32 l,
    f32 r,
    f32 n,
    f32 f
) 
```




<hr>



### function C\_MTXIdentity 

```C++
void C_MTXIdentity (
    Mtx m
) 
```




<hr>



### function C\_MTXInvXpose 

```C++
u32 C_MTXInvXpose (
    Mtx src,
    Mtx invX
) 
```




<hr>



### function C\_MTXInverse 

```C++
u32 C_MTXInverse (
    Mtx src,
    Mtx inv
) 
```




<hr>



### function C\_MTXLookAt 

```C++
void C_MTXLookAt (
    Mtx m,
    Point3dPtr camPos,
    VecPtr camUp,
    Point3dPtr target
) 
```




<hr>



### function C\_MTXMultVec 

```C++
void C_MTXMultVec (
    Mtx44 m,
    Vec * src,
    Vec * dst
) 
```




<hr>



### function C\_MTXMultVecArray 

```C++
void C_MTXMultVecArray (
    Mtx m,
    Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function C\_MTXPerspective 

```C++
void C_MTXPerspective (
    Mtx44 m,
    f32 fovY,
    f32 aspect,
    f32 n,
    f32 f
) 
```




<hr>



### function C\_MTXTranspose 

```C++
void C_MTXTranspose (
    Mtx src,
    Mtx xPose
) 
```




<hr>



### function C\_VECAdd 

```C++
void C_VECAdd (
    Vec * a,
    Vec * b,
    Vec * c
) 
```




<hr>



### function C\_VECCrossProduct 

```C++
void C_VECCrossProduct (
    Vec * a,
    Vec * b,
    Vec * axb
) 
```




<hr>



### function C\_VECDotProduct 

```C++
f32 C_VECDotProduct (
    Vec * a,
    Vec * b
) 
```




<hr>



### function C\_VECNormalize 

```C++
void C_VECNormalize (
    Vec * src,
    Vec * unit
) 
```




<hr>



### function C\_VECScale 

```C++
void C_VECScale (
    Vec * src,
    Vec * dst,
    f32 scale
) 
```




<hr>



### function C\_VECSquareDistance 

```C++
f32 C_VECSquareDistance (
    Vec * a,
    Vec * b
) 
```




<hr>



### function C\_VECSquareMag 

```C++
f32 C_VECSquareMag (
    Vec * v
) 
```




<hr>



### function C\_VECSubtract 

```C++
void C_VECSubtract (
    Vec * a,
    Vec * b,
    Vec * c
) 
```




<hr>



### function MTXGetStackPtr 

```C++
Mtx * MTXGetStackPtr (
    MTXStack * sPtr
) 
```




<hr>



### function MTXInitStack 

```C++
void MTXInitStack (
    MTXStack * sPtr,
    u32 numMtx
) 
```




<hr>



### function MTXLightFrustum 

```C++
void MTXLightFrustum (
    Mtx m,
    f32 t,
    f32 b,
    f32 l,
    f32 r,
    f32 n,
    f32 scaleS,
    f32 scaleT,
    f32 transS,
    f32 transT
) 
```




<hr>



### function MTXLightOrtho 

```C++
void MTXLightOrtho (
    Mtx m,
    f32 t,
    f32 b,
    f32 l,
    f32 r,
    f32 scaleS,
    f32 scaleT,
    f32 transS,
    f32 transT
) 
```




<hr>



### function MTXLightPerspective 

```C++
void MTXLightPerspective (
    Mtx m,
    f32 fovY,
    f32 aspect,
    f32 scaleS,
    f32 scaleT,
    f32 transS,
    f32 transT
) 
```




<hr>



### function MTXLookAt 

```C++
void MTXLookAt (
    Mtx m,
    Vec * camPos,
    Vec * camUp,
    Vec * target
) 
```




<hr>



### function MTXMultVecArraySR 

```C++
void MTXMultVecArraySR (
    Mtx44 m,
    Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function MTXMultVecSR 

```C++
void MTXMultVecSR (
    Mtx44 m,
    Vec * src,
    Vec * dst
) 
```




<hr>



### function MTXOrtho 

```C++
void MTXOrtho (
    Mtx44 m,
    f32 t,
    f32 b,
    f32 l,
    f32 r,
    f32 n,
    f32 f
) 
```




<hr>



### function MTXPop 

```C++
Mtx * MTXPop (
    MTXStack * sPtr
) 
```




<hr>



### function MTXPush 

```C++
Mtx * MTXPush (
    MTXStack * sPtr,
    Mtx m
) 
```




<hr>



### function MTXPushFwd 

```C++
Mtx * MTXPushFwd (
    MTXStack * sPtr,
    Mtx m
) 
```




<hr>



### function MTXPushInv 

```C++
Mtx * MTXPushInv (
    MTXStack * sPtr,
    Mtx m
) 
```




<hr>



### function MTXPushInvXpose 

```C++
Mtx * MTXPushInvXpose (
    MTXStack * sPtr,
    Mtx m
) 
```




<hr>



### function MTXQuat 

```C++
void MTXQuat (
    Mtx m,
    QuaternionPtr q
) 
```




<hr>



### function MTXReflect 

```C++
void MTXReflect (
    Mtx m,
    Vec * p,
    Vec * n
) 
```




<hr>



### function MTXRotAxisRad 

```C++
void MTXRotAxisRad (
    Mtx m,
    Vec * axis,
    f32 rad
) 
```




<hr>



### function MTXRotRad 

```C++
void MTXRotRad (
    Mtx m,
    s8 axis,
    f32 rad
) 
```




<hr>



### function MTXRotTrig 

```C++
void MTXRotTrig (
    Mtx m,
    s8 axis,
    f32 sinA,
    f32 cosA
) 
```




<hr>



### function MTXScale 

```C++
void MTXScale (
    Mtx m,
    f32 xS,
    f32 yS,
    f32 zS
) 
```




<hr>



### function MTXScaleApply 

```C++
void MTXScaleApply (
    Mtx src,
    Mtx dst,
    f32 xS,
    f32 yS,
    f32 zS
) 
```




<hr>



### function MTXTrans 

```C++
void MTXTrans (
    Mtx m,
    f32 xT,
    f32 yT,
    f32 zT
) 
```




<hr>



### function MTXTransApply 

```C++
void MTXTransApply (
    Mtx src,
    Mtx dst,
    f32 xT,
    f32 yT,
    f32 zT
) 
```




<hr>



### function PSMTXConcat 

```C++
void PSMTXConcat (
    Mtx mA,
    Mtx mB,
    Mtx mAB
) 
```




<hr>



### function PSMTXCopy 

```C++
void PSMTXCopy (
    Mtx src,
    Mtx dst
) 
```




<hr>



### function PSMTXIdentity 

```C++
void PSMTXIdentity (
    Mtx m
) 
```




<hr>



### function PSMTXInvXpose 

```C++
u32 PSMTXInvXpose (
    Mtx src,
    Mtx invX
) 
```




<hr>



### function PSMTXInverse 

```C++
u32 PSMTXInverse (
    Mtx src,
    Mtx inv
) 
```




<hr>



### function PSMTXMultS16VecArray 

```C++
void PSMTXMultS16VecArray (
    Mtx44 * m,
    S16Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function PSMTXMultVec 

```C++
void PSMTXMultVec (
    Mtx44 m,
    Vec * src,
    Vec * dst
) 
```




<hr>



### function PSMTXMultVecArray 

```C++
void PSMTXMultVecArray (
    Mtx m,
    Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function PSMTXROMultS16VecArray 

```C++
void PSMTXROMultS16VecArray (
    ROMtx * m,
    S16Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function PSMTXROMultVecArray 

```C++
void PSMTXROMultVecArray (
    ROMtx * m,
    Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function PSMTXROSkin2VecArray 

```C++
void PSMTXROSkin2VecArray (
    ROMtx * m0,
    ROMtx * m1,
    f32 * wtBase,
    Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function PSMTXReorder 

```C++
void PSMTXReorder (
    Mtx src,
    ROMtx dest
) 
```




<hr>



### function PSMTXTranspose 

```C++
void PSMTXTranspose (
    Mtx src,
    Mtx xPose
) 
```




<hr>



### function PSVECAdd 

```C++
void PSVECAdd (
    Vec * a,
    Vec * b,
    Vec * c
) 
```




<hr>



### function PSVECCrossProduct 

```C++
void PSVECCrossProduct (
    Vec * vec1,
    Vec * vec2,
    Vec * dst
) 
```




<hr>



### function PSVECDotProduct 

```C++
f32 PSVECDotProduct (
    Vec * vec1,
    Vec * vec2
) 
```




<hr>



### function PSVECNormalize 

```C++
void PSVECNormalize (
    Vec * vec1,
    Vec * dst
) 
```




<hr>



### function PSVECScale 

```C++
void PSVECScale (
    Vec * src,
    Vec * dst,
    f32 scale
) 
```




<hr>



### function PSVECSquareDistance 

```C++
f32 PSVECSquareDistance (
    Vec * vec1,
    Vec * vec2
) 
```




<hr>



### function PSVECSquareMag 

```C++
f32 PSVECSquareMag (
    Vec * vec1
) 
```




<hr>



### function PSVECSubtract 

```C++
void PSVECSubtract (
    Vec * a,
    Vec * b,
    Vec * c
) 
```




<hr>



### function VECDistance 

```C++
f32 VECDistance (
    Vec * a,
    Vec * b
) 
```




<hr>



### function VECHalfAngle 

```C++
void VECHalfAngle (
    Vec * a,
    Vec * b,
    Vec * half
) 
```




<hr>



### function VECMag 

```C++
f32 VECMag (
    Vec * v
) 
```




<hr>



### function VECReflect 

```C++
void VECReflect (
    Vec * src,
    Vec * normal,
    Vec * dst
) 
```




<hr>
## Macro Definition Documentation





### define MTXConcat 

```C++
#define MTXConcat `PSMTXConcat`
```




<hr>



### define MTXCopy 

```C++
#define MTXCopy `PSMTXCopy`
```




<hr>



### define MTXIdentity 

```C++
#define MTXIdentity `PSMTXIdentity`
```




<hr>



### define MTXInverse 

```C++
#define MTXInverse `PSMTXInverse`
```




<hr>



### define MTXMultS16VecArray 

```C++
#define MTXMultS16VecArray `PSMTXMultS16VecArray`
```




<hr>



### define MTXMultVec 

```C++
#define MTXMultVec `PSMTXMultVec`
```




<hr>



### define MTXMultVecArray 

```C++
#define MTXMultVecArray `PSMTXMultVecArray`
```




<hr>



### define MTXROMultS16VecArray 

```C++
#define MTXROMultS16VecArray `PSMTXROMultS16VecArray`
```




<hr>



### define MTXROMultVecArray 

```C++
#define MTXROMultVecArray `PSMTXROMultVecArray`
```




<hr>



### define MTXROSkin2VecArray 

```C++
#define MTXROSkin2VecArray `PSMTXROSkin2VecArray`
```




<hr>



### define MTXReorder 

```C++
#define MTXReorder `PSMTXReorder`
```




<hr>



### define MTXTranspose 

```C++
#define MTXTranspose `PSMTXTranspose`
```




<hr>



### define VECAdd 

```C++
#define VECAdd `PSVECAdd`
```




<hr>



### define VECCrossProduct 

```C++
#define VECCrossProduct `PSVECCrossProduct`
```




<hr>



### define VECDotProduct 

```C++
#define VECDotProduct `PSVECDotProduct`
```




<hr>



### define VECNormalize 

```C++
#define VECNormalize `PSVECNormalize`
```




<hr>



### define VECSquareDistance 

```C++
#define VECSquareDistance `PSVECSquareDistance`
```




<hr>



### define VECSquareMag 

```C++
#define VECSquareMag `PSVECSquareMag`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/mtx.h`

