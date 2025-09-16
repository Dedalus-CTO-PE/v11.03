create table amstrnaf
(
  amtrreg     varchar2(2) default ' ' not null,
  amtrass     varchar2(12) default ' ' not null,
  amtruni     varchar2(5) default ' ' not null,
  amtrirun    varchar2(5) default ' ' not null,
  amtryear    varchar2(4) default ' ' not null,
  amtrper     varchar2(2) default ' ' not null,
  amtrdat     varchar2(8) default ' ' not null,
  amtrref     varchar2(15) default ' ' not null,
  amtrcom     varchar2(30) default ' ' not null,
  amtramt     number(14,2) default 0 not null,
  amtrdled    varchar2(2) default ' ' not null,
  amtrdacc    varchar2(12) default ' ' not null,
  amtrcacc    varchar2(12) default ' ' not null,
  amtrdis     varchar2(5) default ' ' not null,
  amtrres     varchar2(4) default ' ' not null,
  amtrur1     varchar2(30) default ' ' not null,
  amtrur2     varchar2(30) default ' ' not null,
  amtruy1     varchar2(1) default ' ' not null,
  amtruy2     varchar2(1) default ' ' not null,
  amtrspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amstrna1 primary key( 
amtrreg,
amtrass,
amtruni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amstrna2 on amstrnaf
(
amtrirun,
amtrreg,
amtrass,
amtruni
)
  tablespace pas_indx; 
create unique index amstrna3 on amstrnaf
(
amtryear,
amtrper,
amtrreg,
amtrass,
amtruni
)
  tablespace pas_indx; 
