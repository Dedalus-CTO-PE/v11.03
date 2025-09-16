create table fmsgrcaf
(
  fmgccode    varchar2(3) default ' ' not null,
  fmgcseq     varchar2(5) default ' ' not null,
  fmgcledg    varchar2(2) default ' ' not null,
  fmgccc      varchar2(12) default ' ' not null,
  fmgcspar    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsgrca1 primary key( 
fmgccode,
fmgcseq,
fmgcledg,
fmgccc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
