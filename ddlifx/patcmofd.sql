create table patcmorf
(
dcmadmno    char(8),
cmcdate     char(8),
cmnewflg    char(1),
cmspare     char(12),
lf          char(1)
);
create unique index patcmor1 on patcmorf
(
dcmadmno,
cmcdate
);
create unique index patcmor2 on patcmorf
(
cmcdate,
dcmadmno
);
revoke all on patcmorf from public ; 
grant select on patcmorf to public ; 
