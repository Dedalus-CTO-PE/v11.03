create table bokcanaf
(
  bctype      varchar2(3) default ' ' not null,
  bccanc      varchar2(3) default ' ' not null,
  bcdate      varchar2(6) default ' ' not null,
  bccancl     number(6,0) default 0 not null,
  bcspare     varchar2(31) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokcana1 primary key( 
bctype,
bccanc,
bcdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
