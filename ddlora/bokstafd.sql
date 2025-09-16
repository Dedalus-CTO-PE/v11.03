create table bokstaaf
(
  bstype      varchar2(3) default ' ' not null,
  bsdate      varchar2(6) default ' ' not null,
  bsbooks     number(6,0) default 0 not null,
  bsadmts     number(6,0) default 0 not null,
  bsdelvy     number(6,0) default 0 not null,
  bsundlv     number(6,0) default 0 not null,
  bscancb     number(6,0) default 0 not null,
  bscancp     number(6,0) default 0 not null,
  bsdschs     number(6,0) default 0 not null,
  bslock      varchar2(2) default ' ' not null,
  bsdepos     number(6,0) default 0 not null,
  bsspare     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokbsta1 primary key( 
bstype,
bsdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
