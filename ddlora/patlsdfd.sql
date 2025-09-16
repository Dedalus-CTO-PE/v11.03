create table patlsdaf
(
  ptlsclmn    varchar2(3) default ' ' not null,
  ptlshfnd    varchar2(6) default ' ' not null,
  ptlstabt    varchar2(3) default ' ' not null,
  ptlscasm    varchar2(9) default ' ' not null,
  ptlsdes1    varchar2(30) default ' ' not null,
  ptlsdes2    varchar2(35) default ' ' not null,
  ptlslreb    number(14,2) default 0 not null,
  ptlslpat    number(14,2) default 0 not null,
  ptlsinvr    number(1,0) default 0 not null,
  ptlsinvi    number(1,0) default 0 not null,
  ptlsninv    number(1,0) default 0 not null,
  ptlscnid    varchar2(6) default ' ' not null,
  ptlsspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patlsda1 primary key( 
ptlscnid,
ptlsclmn,
ptlshfnd,
ptlstabt,
ptlscasm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patlsda2 on patlsdaf
(
ptlsclmn,
ptlshfnd,
ptlstabt,
ptlscasm,
ptlscnid
)
  tablespace pas_indx; 
