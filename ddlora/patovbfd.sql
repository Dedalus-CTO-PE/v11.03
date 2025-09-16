create table patovbaf
(
  ptobcode    varchar2(3) default ' ' not null,
  ptobfund    varchar2(6) default ' ' not null,
  ptobtblt    varchar2(3) default ' ' not null,
  ptobcscd    varchar2(9) default ' ' not null,
  ptobbrcd    varchar2(3) default ' ' not null,
  ptobamnt    number(14,2) default 0 not null,
  ptobcnid    varchar2(6) default ' ' not null,
  ptobspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patovba1 primary key( 
ptobcnid,
ptobcode,
ptobfund,
ptobtblt,
ptobcscd,
ptobbrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
