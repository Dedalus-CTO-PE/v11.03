create table mlthcpaf
(
  mlhchosp    varchar2(3) default ' ' not null,
  mlhchcpc    varchar2(10) default ' ' not null,
  mlhchsri    varchar2(11) default ' ' not null,
  mlhcprov    varchar2(10) default ' ' not null,
  mlhcstat    number(2,0) default 0 not null,
  mlhcoslv    varchar2(3) default ' ' not null,
  mlhcsdat    varchar2(8) default ' ' not null,
  mlhcedat    varchar2(8) default ' ' not null,
  mlhcatyp    varchar2(3) default ' ' not null,
  mlhcdfac    varchar2(8) default ' ' not null,
  mlhcdlac    varchar2(8) default ' ' not null,
  mlhcyacc    number(2,0) default 0 not null,
  mlhcdeac    varchar2(8) default ' ' not null,
  mlhcactv    varchar2(1) default ' ' not null,
  mlhcspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mlthcpa1 primary key( 
mlhchosp,
mlhchcpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mlthcpa2 on mlthcpaf
(
mlhchcpc,
mlhchosp
)
  tablespace pas_indx; 
