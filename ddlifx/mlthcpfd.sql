create table mlthcpaf
(
  mlhchosp    char(3) default ' ' not null,
  mlhchcpc    char(10) default ' ' not null,
  mlhchsri    char(11) default ' ' not null,
  mlhcprov    char(10) default ' ' not null,
  mlhcstat    decimal(2,0) default 0 not null,
  mlhcoslv    char(3) default ' ' not null,
  mlhcsdat    char(8) default ' ' not null,
  mlhcedat    char(8) default ' ' not null,
  mlhcatyp    char(3) default ' ' not null,
  mlhcdfac    char(8) default ' ' not null,
  mlhcdlac    char(8) default ' ' not null,
  mlhcyacc    decimal(2,0) default 0 not null,
  mlhcdeac    char(8) default ' ' not null,
  mlhcactv    char(1) default ' ' not null,
  mlhcspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index mlthcpa1 on mlthcpaf
(
mlhchosp,
mlhchcpc
);
create unique index mlthcpa2 on mlthcpaf
(
mlhchcpc,
mlhchosp
);
revoke all on mlthcpaf from public ; 
grant select on mlthcpaf to public ; 
