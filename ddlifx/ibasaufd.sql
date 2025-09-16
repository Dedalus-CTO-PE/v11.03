create table ibasauaf
(
  ibsauser    char(5) default ' ' not null,
  ibsadate    char(8) default ' ' not null,
  ibsatime    char(8) default ' ' not null,
  ibsapass    char(20) default ' ' not null,
  ibsaspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ibasaua1 on ibasauaf
(
ibsauser,
ibsadate,
ibsatime
);
create unique index ibasaua2 on ibasauaf
(
ibsadate,
ibsatime,
ibsauser
);
revoke all on ibasauaf from public ; 
grant select on ibasauaf to public ; 
