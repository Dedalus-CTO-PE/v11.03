create table apstcmaf
(
  aptccrd     varchar2(5) default ' ' not null,
  aptcdtrc    varchar2(8) default ' ' not null,
  aptcuniq    varchar2(3) default ' ' not null,
  aptcline    varchar2(3) default ' ' not null,
  aptccom     varchar2(70) default ' ' not null,
  aptcspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apstcma1 primary key( 
aptccrd,
aptcdtrc,
aptcuniq,
aptcline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
