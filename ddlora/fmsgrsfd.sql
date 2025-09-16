create table fmsgrsaf
(
  fmgscode    varchar2(3) default ' ' not null,
  fmgsseq     varchar2(5) default ' ' not null,
  fmgsledg    varchar2(2) default ' ' not null,
  fmgssubj    varchar2(12) default ' ' not null,
  fmgsspar    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsgrsa1 primary key( 
fmgscode,
fmgsseq,
fmgsledg,
fmgssubj)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
