create table ccspdpaf
(
  ccpdhcd     varchar2(2) default ' ' not null,
  ccpddpt     varchar2(8) default ' ' not null,
  ccpdpcd     varchar2(8) default ' ' not null,
  ccpdgcd     varchar2(4) default ' ' not null,
  ccpddes     varchar2(35) default ' ' not null,
  ccpdstc     number(16,4) default 0 not null,
  ccpdrvi     number(18,6) default 0 not null,
  ccpdseq     varchar2(3) default ' ' not null,
  ccpdsus     varchar2(1) default ' ' not null,
  ccpdspa     varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspdpa1 primary key( 
ccpdhcd,
ccpddpt,
ccpdpcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccspdpa2 on ccspdpaf
(
ccpdhcd,
ccpddpt,
ccpdgcd,
ccpdpcd
)
  tablespace pas_indx; 
create unique index ccspdpa3 on ccspdpaf
(
ccpdpcd,
ccpdhcd,
ccpddpt
)
  tablespace pas_indx; 
create unique index ccspdpa4 on ccspdpaf
(
ccpdhcd,
ccpddpt,
ccpdseq,
ccpdpcd
)
  tablespace pas_indx; 
