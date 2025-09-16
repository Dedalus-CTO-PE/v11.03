create table resphraf
(
rephrdt     char(8),
rephrtm     char(5),
rephrun     char(4),
rephfur     char(1),
rephpid     char(16),
rephvis     char(8),
rephnam     char(60),
rephlab     char(3),
rephrrn     char(4),
rephcdt     char(8),
rephctm     char(5),
rephnor     char(1),
rephcon     char(1),
rephtct     char(1),
rephcom     char(1),
rephstk     char(20),
lf          char(1)
);
create unique index resphra1 on resphraf
(
rephrdt,
rephrtm,
rephrun
);
create unique index resphra2 on resphraf
(
rephpid,
rephcdt,
rephctm,
rephrdt,
rephrtm,
rephrun
);
revoke all on resphraf from public ; 
grant select on resphraf to public ; 
