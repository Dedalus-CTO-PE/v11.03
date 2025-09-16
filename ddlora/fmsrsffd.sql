create table fmsrsfaf
(
  fmrfrep     varchar2(2) default ' ' not null,
  fmrfpos     varchar2(5) default ' ' not null,
  fmrfseq     varchar2(5) default ' ' not null,
  fmrfled     varchar2(2) default ' ' not null,
  fmrfacc     varchar2(12) default ' ' not null,
  fmrfprt     varchar2(3) default ' ' not null,
  fmrfcrp     varchar2(1) default ' ' not null,
  fmrfspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsrsfa1 primary key( 
fmrfrep,
fmrfpos,
fmrfseq,
fmrfled,
fmrfacc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsrsfa2 on fmsrsfaf
(
fmrfled,
fmrfacc,
fmrfrep,
fmrfpos,
fmrfseq
)
  tablespace pas_indx; 
create unique index fmsrsfa3 on fmsrsfaf
(
fmrfled,
fmrfrep,
fmrfpos,
fmrfseq,
fmrfacc
)
  tablespace pas_indx; 
