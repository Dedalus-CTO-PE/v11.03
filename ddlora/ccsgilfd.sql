create table ccsgilaf
(
  ccgikey     varchar2(20) default ' ' not null,
  ccgihcd     varchar2(2) default ' ' not null,
  ccgidpt     varchar2(8) default ' ' not null,
  ccgicty     varchar2(4) default ' ' not null,
  ccgiper     number(10,6) default 0 not null,
  ccgispa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsgila1 primary key( 
ccgikey,
ccgihcd,
ccgidpt,
ccgicty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsgila2 on ccsgilaf
(
ccgihcd,
ccgidpt,
ccgicty,
ccgikey
)
  tablespace pas_indx; 
