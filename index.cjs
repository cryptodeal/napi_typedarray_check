const { CheckType } = require('./build/Release/typedarray_repro.node')

CheckType(new Float32Array([100]))

CheckType(new Float64Array([100]))

CheckType(new Int8Array([1]))

CheckType(new Int16Array([1]))

CheckType(new Int32Array([1]))

CheckType(new Uint8Array([1]))

CheckType(new Uint16Array([1]))

CheckType(new Uint32Array([1]))

// `BigInt64Array` & `BigUint64Array` both cause native code to throw `TypeError`
CheckType(new BigInt64Array([BigInt(1)]))

CheckType(new BigUint64Array([BigInt(1)]))

