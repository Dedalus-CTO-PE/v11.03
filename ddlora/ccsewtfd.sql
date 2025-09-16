create table ccsewtaf
(
  ccewhcd     varchar2(2) default ' ' not null,
  cceweps     varchar2(16) default ' ' not null,
  ccewfwt     number(12,4) default 0 not null,
  ccewvwt     number(12,4) default 0 not null,
  ccewtwt     number(12,4) default 0 not null,
  ccewspa     varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsewta1 primary key( 
ccewhcd,
cceweps)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
