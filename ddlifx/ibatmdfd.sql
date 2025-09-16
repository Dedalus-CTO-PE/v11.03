create table ibatmdaf
(
  ibdtscod    char(6) default ' ' not null,
  dibdtrow    char(3) default ' ' not null,
  dibdtcol    char(3) default ' ' not null,
  ibdtindc    decimal(1,0) default 0 not null,
  ibdtplen    decimal(3,0) default 0 not null,
  ibdtcolr    decimal(2,0) default 0 not null,
  ibdttxfl    char(40) default ' ' not null,
  ibdtpind    char(1) default ' ' not null,
  ibdtspar    char(29) default ' ' not null,
  lf          char(1)
);
create unique index ibatdet1 on ibatmdaf
(
ibdtscod,
dibdtrow,
dibdtcol
);
revoke all on ibatmdaf from public ; 
grant select on ibatmdaf to public ; 
