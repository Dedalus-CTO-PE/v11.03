create table ibatmdaf
(
  ibdtscod    varchar2(6) default ' ' not null,
  dibdtrow    varchar2(3) default ' ' not null,
  dibdtcol    varchar2(3) default ' ' not null,
  ibdtindc    number(1,0) default 0 not null,
  ibdtplen    number(3,0) default 0 not null,
  ibdtcolr    number(2,0) default 0 not null,
  ibdttxfl    varchar2(40) default ' ' not null,
  ibdtpind    varchar2(1) default ' ' not null,
  ibdtspar    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibatdet1 primary key( 
ibdtscod,
dibdtrow,
dibdtcol)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
