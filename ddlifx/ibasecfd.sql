create table ibasecuf
(
  psecnme     char(8) default ' ' not null,
  psecdesc    char(30) default ' ' not null,
  pseclev     decimal(1,0) default 0 not null,
  psecpw      char(8) default ' ' not null,
  ppaper      decimal(2,0) default 0 not null,
  psealias    char(8) default ' ' not null,
  psecspar    char(41) default ' ' not null,
  lf          char(1)
);
create unique index ibasecu1 on ibasecuf
(
psecnme
);
create unique index ibasecu2 on ibasecuf
(
psealias,
psecnme
);
revoke all on ibasecuf from public ; 
grant select on ibasecuf to public ; 
