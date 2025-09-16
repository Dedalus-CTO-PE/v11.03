create table amsstpaf
(
  amststk     varchar2(5) default ' ' not null,
  amstbld     varchar2(3) default ' ' not null,
  amstloc     varchar2(6) default ' ' not null,
  amstreg     varchar2(2) default ' ' not null,
  amstass     varchar2(12) default ' ' not null,
  amstgdt     varchar2(8) default ' ' not null,
  amstpdt     varchar2(8) default ' ' not null,
  amstcby     varchar2(10) default ' ' not null,
  amstcom     varchar2(30) default ' ' not null,
  amstlcm     varchar2(30) default ' ' not null,
  amstpop     varchar2(4) default ' ' not null,
  amstpda     varchar2(8) default ' ' not null,
  amstptm     varchar2(5) default ' ' not null,
  amstur1     varchar2(30) default ' ' not null,
  amstur2     varchar2(30) default ' ' not null,
  amstud1     varchar2(8) default ' ' not null,
  amstud2     varchar2(8) default ' ' not null,
  amstuy1     varchar2(1) default ' ' not null,
  amstuy2     varchar2(1) default ' ' not null,
  amstspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsstpa1 primary key( 
amststk,
amstbld,
amstloc,
amstreg,
amstass)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amsstpa2 on amsstpaf
(
amstreg,
amstass,
amststk
)
  tablespace pas_indx; 
