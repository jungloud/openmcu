//
// h350_service.cxx
//
// Code automatically generated by asnparse.
//

#ifdef P_USE_PRAGMA
#pragma implementation "h350_service.h"
#endif

#include <ptlib.h>
#include "h350/h350_service.h"

#define new PNEW


#if ! H323_DISABLE_H225

//
// H350ServiceControl
//

H225_H350ServiceControl::H225_H350ServiceControl(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 0, FALSE, 0)
{
}


#ifndef PASN_NOPRINTON
void H225_H350ServiceControl::PrintOn(ostream & strm) const
{
  int indent = (int)strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+10) << "ldapURL = " << setprecision(indent) << m_ldapURL << '\n';
  strm << setw(indent+9) << "ldapDN = " << setprecision(indent) << m_ldapDN << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H225_H350ServiceControl::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H225_H350ServiceControl), PInvalidCast);
#endif
  const H225_H350ServiceControl & other = (const H225_H350ServiceControl &)obj;

  Comparison result;

  if ((result = m_ldapURL.Compare(other.m_ldapURL)) != EqualTo)
    return result;
  if ((result = m_ldapDN.Compare(other.m_ldapDN)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H225_H350ServiceControl::GetDataLength() const
{
  PINDEX length = 0;
  length += m_ldapURL.GetObjectLength();
  length += m_ldapDN.GetObjectLength();
  return length;
}


BOOL H225_H350ServiceControl::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_ldapURL.Decode(strm))
    return FALSE;
  if (!m_ldapDN.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H225_H350ServiceControl::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_ldapURL.Encode(strm);
  m_ldapDN.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H225_H350ServiceControl::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H225_H350ServiceControl::Class()), PInvalidCast);
#endif
  return new H225_H350ServiceControl(*this);
}


#endif // if ! H323_DISABLE_H225


// End of h350_service.cxx