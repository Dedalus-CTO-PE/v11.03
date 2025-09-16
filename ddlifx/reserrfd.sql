create table reserraf
(
reerrdt     char(8),
reerrtm     char(5),
reerrun     char(4),
reermsg     char(20),
reerspa     char(80),
lf          char(1)
);
create unique index reserra1 on reserraf
(
reerrdt,
reerrtm,
reerrun
);
revoke all on reserraf from public ; 
grant select on reserraf to public ; 
