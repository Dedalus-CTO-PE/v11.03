create table sinkctaf
(
sikckwd     char(15),
sikccat     char(7),
sikcspa     char(10),
lf          char(1)
);
create unique index sinkcta1 on sinkctaf
(
sikckwd,
sikccat
);
create unique index sinkcta2 on sinkctaf
(
sikccat,
sikckwd
);
revoke all on sinkctaf from public ; 
grant select on sinkctaf to public ; 
