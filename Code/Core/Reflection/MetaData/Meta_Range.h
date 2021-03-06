// Meta_Range.h
//------------------------------------------------------------------------------
#pragma once
#ifndef CORE_REFLECTION_META_RANGE_H
#define CORE_REFLECTION_META_RANGE_H

// Includes
//------------------------------------------------------------------------------
#include "Core/Reflection/MetaData/MetaDataInterface.h"

// Meta_Range
//------------------------------------------------------------------------------
class Meta_Range : public IMetaData
{
	REFLECT_DECLARE( Meta_Range )
public:
    explicit Meta_Range();
	explicit Meta_Range( int32_t minValue, int32_t maxValue );
	virtual ~Meta_Range();

    inline int32_t GetMin() const { return m_Min; }
    inline int32_t GetMax() const { return m_Max; }
protected:
    int32_t m_Min;
    int32_t m_Max;
};

//------------------------------------------------------------------------------
#endif // CORE_REFLECTION_META_RANGE_H
