create table patldfaf
(
  ptldclmn    varchar2(3) default ' ' not null,
  ptldhfnd    varchar2(6) default ' ' not null,
  ptldtabt    varchar2(3) default ' ' not null,
  ptldcasm    varchar2(9) default ' ' not null,
  dptldeda    varchar2(4) default ' ' not null,
  ptlddes1    varchar2(30) default ' ' not null,
  ptlddes2    varchar2(35) default ' ' not null,
  ptlddreb    number(14,2) default 0 not null,
  ptlddpat    number(14,2) default 0 not null,
  ptldcnid    varchar2(6) default ' ' not null,
  ptldspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patldfa1 primary key( 
ptldcnid,
ptldclmn,
ptldhfnd,
ptldtabt,
ptldcasm,
dptldeda)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
