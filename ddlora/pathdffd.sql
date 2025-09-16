create table pathdfaf
(
  pthdclmn    varchar2(3) default ' ' not null,
  pthdhfnd    varchar2(6) default ' ' not null,
  pthdtabt    varchar2(3) default ' ' not null,
  pthdcasm    varchar2(9) default ' ' not null,
  dpthdeda    varchar2(4) default ' ' not null,
  pthddtyp    number(1,0) default 0 not null,
  pthddes1    varchar2(30) default ' ' not null,
  pthddes2    varchar2(35) default ' ' not null,
  pthddreb    number(14,2) default 0 not null,
  pthddpat    number(14,2) default 0 not null,
  pthdcnid    varchar2(6) default ' ' not null,
  pthdspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pathdfa1 primary key( 
pthdcnid,
pthdclmn,
pthdhfnd,
pthdtabt,
pthdcasm,
dpthdeda)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
