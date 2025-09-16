create table oldctfaf
(
  ptctclmn    varchar2(3) default ' ' not null,
  ptcthfnd    varchar2(6) default ' ' not null,
  ptcttabt    varchar2(3) default ' ' not null,
  ptctcasm    varchar2(9) default ' ' not null,
  ptctmbsb    varchar2(3) default ' ' not null,
  dptctdca    varchar2(1) default ' ' not null,
  dptctitm    varchar2(2) default ' ' not null,
  ptctdreb    number(14,2) default 0 not null,
  ptctdpat    number(14,2) default 0 not null,
  ptctcnid    varchar2(6) default ' ' not null,
  ptctspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patct2a1 primary key( 
ptctcnid,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctcasm,
ptctmbsb,
dptctdca,
dptctitm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patct2a2 on oldctfaf
(
ptctcnid,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctmbsb,
ptctcasm,
dptctdca,
dptctitm
)
  tablespace pas_indx; 
create unique index patct2a3 on oldctfaf
(
dptctitm,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctmbsb,
ptctcasm,
dptctdca,
ptctcnid
)
  tablespace pas_indx; 
