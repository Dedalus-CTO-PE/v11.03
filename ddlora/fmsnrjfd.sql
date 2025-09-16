create table fmsnrjaf
(
  fmnjuid     varchar2(4) default ' ' not null,
  fmnjseq     varchar2(3) default ' ' not null,
  fmnjdes     varchar2(35) default ' ' not null,
  fmnjsta     number(1,0) default 0 not null,
  fmnjtyp     number(1,0) default 0 not null,
  fmnjrep     varchar2(3) default ' ' not null,
  fmnjcmd     varchar2(50) default ' ' not null,
  fmnjspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrja1 primary key( 
fmnjuid,
fmnjseq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
